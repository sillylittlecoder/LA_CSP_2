#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Example 1
    int grades[] = {50,98,76,94,64,82,27};
    printf("%d\n", grades[1]);
    grades[1] = 70; //this is how you can change a decimal value in the array
    printf("%d\n", grades[1]);

    //Example 2...when you don't have variables set
    float measurments[10];
    measurments[0] = 5.25;
    measurments[1] = 0.34;
    measurments[2] = 1.99;
    measurments[3] = 3.48;

    printf("%.2f %.2f %.2f %.2f %.2f \n", measurments[0], measurments[1], measurments[2], measurments[3], measurments[4]);

    //Example 3...list of strings
    char names[][20] = {"Michael", "Liam", "Canon", "Lillie", "Emerson", "Cody", "Demi"};

    printf("%s\n", names[6]);  //[-1] = makes it start from the last item in the list

    //For Loops Examples
    for(int i = 20; i > 0; i --){
        printf("%d ", i);
    }
    printf("\n"); //makes new line

    //For Loop Example 2
    int names_len = sizeof(names)/sizeof(names[0]);
    for(int x = 0; x < names_len; x++){
        printf("%s Avila\n", names[x]);
    }

    //For Loop Example 3
    srand(time(NULL));

    int number = rand() % 10 +1;
    int count = 0;

    for(count; count < number; count++){
        printf("duck\n");
    }
    printf("GOOSE!\n");
    return 0;
}