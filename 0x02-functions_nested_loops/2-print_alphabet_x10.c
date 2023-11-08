#include <stdio.h>

int main(){

    for (int i = 1; i <= 10; i++){
        for(char a = 'a'; a <= 'z'; a++){
            printf("%c", a);
        }
        printf("\n");
    }
}