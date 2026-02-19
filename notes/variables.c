#include <stdio.h> //lets you have inputs and outputs


int main(){
    //variables examples
    int age = 9999;
    const float gpa = 3.98;
    char grade = 'A' ; // single letter uses single quotes
    char name[] = "Eric";
    int number;
    char user[50];

    printf("Tell me your name\n");
    scanf("%s", &user);

    printf("what is your favorite number?\n");
    scanf("%d", &number);


    printf("%s's favorite number is: %d\n", user, number);
    printf("It worked!\n");
    printf("%d\n", age);
    return 0;
}