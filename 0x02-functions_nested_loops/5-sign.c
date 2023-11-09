#include <stdio.h>
#include "main.h"

/**
 * int print_sign(int n): prints the sign of a number
 * Return: 1  is greater zero,
 * 0 is zero,
 * -1  is less than zero
*/

int print_sign(int n){
    
    if (n > 0){
        putchar('+');
        return 1;
    }
    
    else if(n == 0){
        putchar('0');
        return 0;
    }
    
    else if(n < 0){
        putchar('-');
    }
    
    return -1;

}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0xff);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(-1);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    return (0);
}