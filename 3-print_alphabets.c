#include <stdio.h>

int main()
{
    char alpabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letter;

    for(letter = 0; letter < 52; letter++){
        putchar(alpabets[letter]);
    }

    putchar('\n');
    return (0);
}