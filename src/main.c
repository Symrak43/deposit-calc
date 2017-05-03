#include <stdio.h> 
#include "deposit.h"

int main(){

    int sum, date;
    printf("Сумма вклада: ");
    scanf("%d", &sum);

    printf("Срок вклада: ");
    scanf("%d", &date);

    if(errore(sum, date))
    	printf("Вы получите: %d\n", vklad(sum, date));
    else
    	printf("Ошибка!\n");
}