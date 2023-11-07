#include <stdio.h>

int main()
{
    // char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
    char letter;

    for(letter = 'a'; letter <= 'z'; letter++){
        if (letter != 'q' && letter != 'e'){
            putchar(letter);
        }
    }
    putchar('\n');
}