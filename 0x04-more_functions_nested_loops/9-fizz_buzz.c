#include <stdio.h>

int main(void){
    
    int number;

    for(number = 0; number <= 100; number++){
        if(number % 3 == 0 && number % 5 == 0){
            printf(" FizzBuzz");
        }
        else if(number % 3 == 0 && number % 5 != 0 ){
            printf(" Fizz");
        }
        else if(number % 5 == 0 && number % 3 != 0){
            printf(" Buzz");
        }
        else if(number == 1){
            printf("%d",number);
        }
        else{
            printf(" %d", number);
        }
    }
    printf("\n");

    return 0;
}