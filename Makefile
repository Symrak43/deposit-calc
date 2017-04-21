# переменная CC указывает компилятор, используемый для сборки
CC=gcc

# в переменной CFLAGS лежат флаги, которые передаются компилятору
CFLAGS=-c -Wall -Werror
SOURCES = main.c deposit.c
EXECUTABLE = main
OBJECTS = $(SOURCES: .c=.o)
DIR = build
DUR = bin
DAR = src

all: $(DUR)/$(EXECUTABLE)

$(DUR)/$(EXECUTABLE): $(DIR)/main.o $(DIR)/deposit.o
	$(CC) $(DIR)/main.o $(DIR)/deposit.o -o $(DUR)/$(EXECUTABLE)

$(DIR)/main.o: $(DAR)/main.c
	$(CC) $(CFLAGS) -c $(DAR)/main.c -o $(DIR)/main.o

$(DIR)/deposit.o: $(DAR)/deposit.c
	$(CC) $(CFLAGS) -c $(DAR)/deposit.c -o $(DIR)/deposit.o
.PHONY : clean
clean:
	rm -rf build/*.o bin/main