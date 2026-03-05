#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// LA FizzBuzz

int main(){
    int start = 1;
    while(start <= 50){ 
        if (start%3 == 0 && start%5 == 0){
            printf("FizzBuzz\n");
        }else if (start%5 == 0){
            printf("Buzz\n");
        }else if (start%3 == 0){
            printf("Fizz\n");
        }else{
            printf("%d\n", start);
        }
        start++;
    }
    return 0;
}