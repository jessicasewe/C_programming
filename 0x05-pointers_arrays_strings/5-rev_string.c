#include "main.h"
#include <stdio.h>
#include <string.h>

void rev_string(char *s){

    int length = strlen(s);

    int i, j;
    int temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp;

        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}