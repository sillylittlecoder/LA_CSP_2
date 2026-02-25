#include <stdio.h>
#include <string.h>
// LA Silly Sentences
int main(){
    char person[20];
    char adjective[20];
    char adjective2[20];
    char noun[20];
    char adjective3[20];
    char noun2[20];
    char adjective4[20];
    char adjective5[20];
    char verb[20];
    char verb2[20];

    printf("Give me a person's name:\n");
    scanf("%s", &person);
    printf("Give me an adjective:\n");
    scanf("%s", &adjective);
    printf("Give me another adjective!:\n");
    scanf("%s", &adjective2);
    printf("Give me a proper noun, preferebly a living thing:\n");
    scanf("%s", &noun);
    printf("How about another adjective!:\n");
    scanf("%s", &adjective3);
    printf("Give me a second noun:\n");
    scanf("%s", &noun2);
    printf("Give me a color:\n");
    scanf("%s", &adjective4);
    printf("Give me the last adjective:\n");
    scanf("%s", &adjective5);
    printf("Give me a third past tense verb:\n");
    scanf("%s", &verb);
    printf("One last verb please:\n");
    scanf("%s", &verb2);

    printf("Yesterday, %s and I went to the park. On our way to the %s park, we saw a %s %s on a bike. We also saw big %s balloons tied to a %s. Once we got to the %s park, the sky turned %s. It started to rain and pour! %s and I %s all the way home. Tomorrow we will try to go to the %s park again and hope it doesn't %s.", person, adjective, adjective2, noun, adjective3, noun2, adjective, adjective4, person, verb, adjective, verb2);

    char first[] = "Lilliann";
    char last[] = "Avila";
    char full_name[20];
    strcat(full_name, first);
    strcat(full_name, " ");
    strcat(full_name, last);

    printf("This MadLib was programmed by %s\n", full_name);
    return 0;
}