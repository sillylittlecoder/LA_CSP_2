#include <stdio.h>
#include <string.h> //use this so you are able to concatenate strings

int main(){
    char subject[] = "Computer Science Principles";
    char school[] = "UCAS";
    char book[50];

    printf("What is your favorite book: ");
    scanf("%s", &book); //use if there is only one word
    fgets(book, sizeof(book), stdin);  //use if there are multiple words(the input will be put in a different line)

    printf("This is %s at %s. It is awesome!\n", subject, school);
    printf("%s is a cool book!\n", book);


    //concatenation
    char first[] = "Vienna";
    char last[] = "Larose";
    char full_name[20];

    first[0] = 'K';
    first[1] = 'a';
    first[2] = 't';
    first[3] = 'i';
    first[4] = 'e';
    first[5] = ' ';

    strcat(full_name, first);
    strcat(full_name, " ");
    strcat(full_name, last);

    printf("%s\n", full_name);

    //length of string
    printf("%lu\n", strlen(full_name));

    return 0;
}

//a string is just a list of characters 
//you are only allowed to concatenate two things at once
//concatenating is basically just adding onto one variables