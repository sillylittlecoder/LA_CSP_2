#include <stdio.h>
//LA updated financial calculator


void monthly(char* money){
    printf("What is your monthly %s?\n", money);
    scanf("%s", &money);
}

void percent(income,expenses){
    return round((expenses/income)*100,2)
}

int main(){
    monthly("income");
    monthly("rent/mortgage");
    monthly("utilities");
    monthly("groceries");
    monthly("transportation");
    return 0;
}