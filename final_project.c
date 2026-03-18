// HM LA Final project
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int number = rand() % 10;
    int count = 0;
    char words[][20] = {"onyx", "xylaphone", "glyph", "syzygy", "zuzwang", "house", "dermatoglyphics", "xebec", "bdellium", "grawlix",};
    printf("%s\n", words[number]);


    printf("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose.\n"); 

char let_list[20];
int loss = 1;

while (true) {
    char guess;
    printf("guess a singular letter:\n");
    scanf("%s", &guess);
    
    int guess_len = sizeof(guess)/sizeof(guess[number]);  //need to figure out why there is an error there
    for(int x=0; x < guess_len; x++){
        printf("%d", guess);
    }
    char display = ""
//this loop will be for guessing a singular letter and then checking if that letter is in the word



    if(loss == 1){
        printf("--------\n|      |\n|\n|\n|\n|\n--------\n");
    }else if(loss == 2){
        printf("--------\n|      |\n|      O\n|\n|\n|\n--------\n");
    }else if (loss == 3){
        printf("--------\n|      |\n|      O\n|      |\n|\n|\n--------\n");
    }else if (loss == 4){
        printf("--------\n|      |\n|      O\n|      |\n|     /\n |\n--------\n");
    }else if (loss == 5){
        printf("--------\n|      |\n|      O\n|      |\n |     / \\\n|\n--------\n");
    }else if (loss == 6){
        printf("--------\n|      |\n|      O\n|    \\ | \n|     / \\\n|\n--------\n");
    }else if (loss == 7){
        printf("--------\n|      |\n|      O\n|    \\ | /\n|     / \\\n|\n--------\n");
    }else if (loss == 8){
        printf("--------\n|      |\n|      O\n|    \\ | /\n|     / \\\n|    -\n--------\n");
    }else if (loss == 9){
        printf("--------\n|      |\n|      O\n|     \\ | /\n|     / \\\n|      -  -\n--------\nWow, eight guesses and you still lost! The word was:%s", words);
    }
}

    return 0;

}