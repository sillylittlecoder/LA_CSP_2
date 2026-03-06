#include <stdio.h>
#include <math.h>
//LA updated financial calculator


int monthly(char* money){
    int value;
    printf("What is your monthly %s?\n", money);
    scanf("%d", &value);
    return value;
}

int percent(income,expenses){
    return round((expenses/income) * 100);
}

int main(){
    int income = monthly("income");
    monthly("rent/mortgage");
    monthly("utilities");
    monthly("groceries");
    monthly("transportation");


    
    return 0;
}