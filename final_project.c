// HM LA Final project
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int number = rand() % 10;

    char words[][20] = {
        "onyx", "xylaphone", "glyph", "syzygy", "zuzwang",
        "house", "dermatoglyphics", "xebec", "bdellium", "grawlix"
    };

    char word[20];
    strcpy(word, words[number]);

    printf("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose.\n"); 

    int word_len = strlen(word);

    char display[20];
    for (int i = 0; i < word_len; i++){
        display[i] = '_';
    }
    display[word_len] = '\0';

    char let_list[26];
    int let_count = 0;

    int loss = 1;

    while (true) {
        char guess;
        int correct = 0;

        printf("guess a singular letter:\n");
        scanf(" %c", &guess);

        // check if already guessed
        int already = 0;
        for(int i = 0; i < let_count; i++){
            if(let_list[i] == guess){
                already = 1;
            }
        }

        if(already == 1){
            printf("You've already guessed that!\n");
            continue;
        }

        // store guess
        let_list[let_count] = guess;
        let_count++;

        // check letters
        for(int x = 0; x < word_len; x++){
            if(word[x] == guess){
                display[x] = guess;
                correct++;
            }
        }

        if(correct == 0){
            loss++;
            printf("Nope! Wrong letter.\n");
        }

        printf("%s\n", display);

        if(strcmp(display, word) == 0){
            printf("You won!\n");
            break;
        }

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
            printf("--------\n|      |\n|      O\n|     \\ | /\n|     / \\\n|      -  -\n--------\n");
            printf("Wow, eight guesses and you still lost! The word was:%s\n", word);
            break;
        }
    }

    return 0;
}