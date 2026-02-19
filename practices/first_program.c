#include <stdio.h>
// LA 7th period first program

int main(){
    char user[10];
    printf("Tell me your name\n");
    scanf("%s", &user);
    printf("Hello,%s! Welcome to your first C program.", user);
    return 0;
}