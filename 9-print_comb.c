#include <stdio.h>

int main(){
    int i;

    for(i = 48; i < 57; i++){
        putchar(i);
        putchar(',');
        putchar(' ');
    }
    putchar('9');
    putchar('\n');

    return (0);
}