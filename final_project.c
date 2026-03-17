// HM LA Final project
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int number = rand() % 10 +1;
    int count = 0;
    char words[][20] = {"onyx", "xylaphone", "glyph", "syzygy", "zuzwang", "house", "dermatoglyphics", "xebec", "bdellium", "grawlix",};
    printf("%s\n", words[6]);


    printf("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose."); 

    return 0;

}