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
    scanf("%s", &user); //use %s for a string, or a name which would be a char variable
    //use %c for a singular character
    //use %f for a float variable

    printf("what is your favorite number?\n");
    scanf("%d", &number); //%d is used for decimals or when the variable is an int variable
    //after using the variable place holder (%d), always list the variable being used

    printf("%s's favorite number is: %d\n", user, number);
    printf("It worked!\n");
    printf("%d\n", age);
    return 0;
}
    //always add new line character to print statements(\n)