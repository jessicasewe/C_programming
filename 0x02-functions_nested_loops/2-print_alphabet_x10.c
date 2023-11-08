#include <stdio.h>
/**
 * for loop: repeats a section of code a limited  amount  of time.
*/

int main(){

    int i;
    char a;

    //prints the alphabets 10 times, seperated by a new line
    for (i = 1; i <= 10; i++){     //number of times the alphabets should be printed
        for(a = 'a'; a <= 'z'; a++){ 
            printf("%c", a);
        }
        printf("\n");
    }
}