#include <stdio.h>
#include "main.h"

int print_last_digit(int n){
    int num = n % 10;
    if(num < 0){
        num = -num;
    }
    putchar((char)num + '0');
    return 0;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}