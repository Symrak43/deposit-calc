# переменная CC указывает компилятор, используемый для сборки
CC=gcc

# в переменной CFLAGS лежат флаги, которые передаются компилятору

CFLAGS= -I thirdparty -I src -c -Wall -Werror
#сборка программы
SOURCES = main.c deposit.c
EXECUTABLE = main
DIR = build/src
DUR = bin/deposit-calc
DAR = src

#сборка тестов
SOURCES_TEST = main.c deposit_test.c validation_test.c
EXECUTABLE_TEST = test
BUT = build/test
BT = bin/deposit-calc-test
DT = test


all: $(DUR)/$(EXECUTABLE) test

$(DUR)/$(EXECUTABLE): $(DIR)/main.o $(DIR)/deposit.o
	@if [ ! -d $(DUR) ] ; then echo "creating $(DUR)"; mkdir bin; mkdir bin/deposit-calc; fi
	$(CC) $(DIR)/main.o $(DIR)/deposit.o -o $(DUR)/$(EXECUTABLE)

$(DIR)/main.o: $(DAR)/main.c
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)"; mkdir build; mkdir build/src; fi
	$(CC) $(CFLAGS) -c $(DAR)/main.c -o $(DIR)/main.o

$(DIR)/deposit.o: $(DAR)/deposit.c
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)"; mkdir build; mkdir build/src; fi
	$(CC) $(CFLAGS) -c $(DAR)/deposit.c -o $(DIR)/deposit.o



test: $(BT)/$(EXECUTABLE_TEST)

$(BT)/$(EXECUTABLE_TEST): $(BUT)/main.o $(BUT)/deposit_test.o $(BUT)/validation_test.o
	@if [ ! -d $(BT) ] ; then echo "creating $(BT)"; mkdir bin; mkdir bin/deposit-calc-test; fi
	$(CC) $(BUT)/main.o $(BUT)/deposit_test.o $(BUT)/validation_test.o $(DIR)/deposit.o -o $(BT)/$(EXECUTABLE_TEST)

$(BUT)/main.o: $(DT)/main.c
	@if [ ! -d $(BUT) ] ; then echo "creating $(BUT)"; mkdir build; mkdir build/test; fi
	$(CC) $(CFLAGS) -c $(DT)/main.c -o $(BUT)/main.o

$(BUT)/deposit_test.o: $(DT)/deposit_test.c
	@if [ ! -d $(BUT) ] ; then echo "creating $(BUT)"; mkdir build; mkdir build/test; fi
	$(CC) $(CFLAGS) -c $(DT)/deposit_test.c -o $(BUT)/deposit_test.o

$(BUT)/validation_test.o: $(DT)/validation_test.c
	@if [ ! -d $(BUT) ] ; then echo "creating $(BUT)"; mkdir build; mkdir build/test; fi
	$(CC) $(CFLAGS) -c $(DT)/validation_test.c -o $(BUT)/validation_test.o 

.PHONY : clean test
clean:
	rm -rf $(DIR)/*.o $(DUR)/*.~ $(BUT)/*.o $(BT)/*.~