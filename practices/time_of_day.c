//LA time of day in C
#include <stdio.h>
#include <string.h>

int main(){
    int hour;

    printf("What is the hour in military time?\n");
    scanf("%d", &hour);

    if (hour <= 11 && hour >= 0){
        printf("Good morning!\n");
    }else if (hour > 11 && hour <= 16){
        printf("Good afternoon!\n");
    }else if (hour > 16 && hour <= 24){
        printf("Good evening!\n");
    }else{
        printf("%d is not a military time. Maybe go look up a time chart.\n", hour);
    }
    return 0;
}