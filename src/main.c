#include <stdio.h> 
#include "deposit.h"

int main(){

    int sum, date;
    printf("Сумма вклада: ");
    scanf("%d", &sum);

    printf("Срок вклада: ");
    scanf("%d", &date);

    errore(sum, date);

    return 0;
};