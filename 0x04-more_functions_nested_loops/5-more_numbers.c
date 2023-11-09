#include <stdio.h>
#include "main.h"

void more_numbers(void)
{
    int i , j;
    for (i = 0; i <= 10; i++)
    {
        for(j = 0; j <= 14; j++){
            printf("%d", j);
        }
        putchar('\n');
    }
    return;
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}