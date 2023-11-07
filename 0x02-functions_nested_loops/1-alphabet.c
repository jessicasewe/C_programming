#include <stdio.h>
#include "main.h"

void print_alphabet(void){
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++){
        putchar(letter);
    }

    putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}