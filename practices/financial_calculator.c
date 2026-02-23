#include <stdio.h>
#include <math.h>
// LA Financial Calculator

int main(){
    int income;
    int rent_mortgage;
    int utilities;
    int groceries;
    int transportation;
    float savings;
    float spending;
    printf("What is your monthly income\n");
    scanf("%d", &income);
    printf("What is your monthly rent/mortgage\n");
    scanf("%d", &rent_mortgage);
    printf("What is your monthly utilities\n");
    scanf("%d", &utilities);
    printf("What is your monthly groceries\n");
    scanf("%d", &groceries);
    printf("What is your monthly transportation\n");
    scanf("%d", &transportation);

    printf("Your rent is %d and that is %.2f of your income\n", (float) round(rent_mortgage/income));
    printf("Your utilites are %d and that is %.2f of your income\n", (float) round(utilities/income));
    printf("Your groceries are %d and that is %.2f of your income\n", (float) round(groceries/income));
    printf("Your transportation is %d and that is %.2f of your income\n", (float) round(transportation/income));
    printf("You should save %d a month, and that is %.2f of your income\n", (float) round(savings/income));
    printf("You have %d of spending money each month\n", (float) income-rent_mortgage-utilities-groceries-transportation);
    return 0;
}

// it is taking in the inputs but it is printing 0 in every statement

// round(variable/income,2)*100