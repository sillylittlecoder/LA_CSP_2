// HM LA Final project
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number = (rand() % 30) + 1;

    while (true){
        int guess;
        printf("guess a singular letter: ");
        scanf("%d", &guess);

        if (guess == number){
            printf("You WON! The number was %d.\n", number);
        }else if (guess < number){
            printf("guess higher\n");
        }else{
            printf("guess lower\n");
        }
    }

char words[][20] = {"onyx", "xylaphone", "glyph", "syzygy", "zuzwang", "house", "dermatoglyphics", "xebec", ""}; // worked on this section
    for(char letter in word)
        if letter in let_list:
            display += letter
        else:
            display += "_"
    print(display)


    printf("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose."); 

    return 0;

}