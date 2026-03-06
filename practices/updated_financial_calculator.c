#include <stdio.h>
//LA updated financial calculator


void monthly(char* money){
    printf("What is your monthly %s?\n", money);
    scanf("%s", &money);
}

int main(){
    monthly("income");
    monthly("rent/mortgage");
    monthly("utilities");
    monthly("groceries");
    monthly("transportation");
    return 0;
}