//HM and LA Final Project: Hangman Game
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

char let_list[30];
int loss = 1;
int count = 0;
int word_len = strlen(word);
char display[word_len];
for(int x=0; x < word_len; x++){
        display[x] = '_';
    }
while (true) {
    
    
    char guess;

    printf("%s\n\n", display);
    printf("guess a singular letter:\n");
    scanf("%s", &guess);
    
    int correct = 0;
    int incorrect = 0;
    for(int x=0; x < word_len; x++){
        if(word[x] == guess){
            display[x] = guess;
            correct++;
            let_list[count] = guess;
    }
    if(correct == 0){
        count++;
        loss++;
        printf("Nope! Wrong letter.\n");
    }
    
    for(int y=0; y < count; y++){
        if(let_list[y] == guess){
            display[y] = guess;
            let_list[count] = guess;
    }
}
    if(guess == let_list[0]){
        printf("You've already guessed that!");
    }else if(display == word){
        printf("You won!");
    }else if(guess <= let_list[0]){
        printf("");
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
        printf("--------\n|      |\n|      O\n|     \\ | /\n|     / \\\n|      -  -\n--------\nWow, eight guesses and you still lost! The word was:%s", word);
        break;
    }
}
}
    return 0;
}