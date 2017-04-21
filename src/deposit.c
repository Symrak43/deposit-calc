#include <stdio.h>
#include "deposit.h"
int vklad(int sum, int date){
    int e;
    if (sum < 1000000){
        if (date < 31){
            e = sum - sum * 0.1;
        };
        if ((date > 30) && (date < 121)){
            e = sum + sum * 0.02;
        };
        if ((date > 120) && (date < 241)){
            e = sum + sum * 0.06;
        };
        if ((date > 240) && (date < 366)){
            e= sum + sum * 0.12;
        };
    } 
    else{
        if (date < 31){
            e = sum - sum * 0.1;
        };
        if ((date > 30) && (date < 121)){
            e = sum + sum * 0.03;
        };
        if ((date > 120) && (date < 241)){
            e = sum + sum * 0.08;
        };
        if ((date > 240) && (date < 366)){
            e= sum + sum * 0.15;
        };
    };
    return e;
};
  
int errore(int sum, int date){

    if ((sum > 9999) && (date < 366) && (date >= 0))
        printf("Вы получите: %d\n", vklad(sum, date));
    else
        printf("Ошибка!\n");
    return 0;
};
