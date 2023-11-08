#include <stdio.h>
/**
 * void print_numbers(void): prints the numbers, from 0 to 9;
 * Return: 0;
*/

void print_numbers(void){
    char i;
    
    for (i = '0'; i <= '9'; i++){
        putchar(i);
    }
    putchar('\n');
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
