#include <stdio.h>
#include <stdlib.h> //include this to set a random number
#include <time.h> //inculde this to pull a random number
#include <stdbool.h>

int main(){
    // Example 1
    int i = 1;
    while(i <= 10){
        printf("%d\n", i);
        i++; //increases variable i by 1
    }

    // Set a random number
    srand(time(NULL));

    printf("%d\n", rand() % 11); //random number between 0-10
    printf("%d\n", (rand() %10) +1); //random number between 1-10
    printf("%d\n", (rand() %5) +5); //random number between 5-10

     // Example 2
    int goose = (rand() % 20) +1;
    int count = 1;
    while (count < goose){
        printf("duck\n");
        count ++;
    }
    printf("GOOSE!\n");

    // Example 3
    int number = (rand() % 30) + 1;

    while (true){
        int guess;
        printf("guess a number between 1 and 30: ");
        scanf("%d", &guess);

        if (guess == number){
            printf("You WON! The number was %d.\n", number);
        }else if (guess < number){
            printf("guess higher\n");
        }else{
            printf("guess lower\n");
        }
    }
    return 0;
}