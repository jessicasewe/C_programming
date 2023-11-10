#include <stdio.h>
#include "main.h"
/**
 * void print_diagonal(int n): draws a diagonal line on the terminal
 * return: 
*/

void print_diagonal(int n){

    if(n <= 0){
        putchar('\n');
    }
    else
    {
        for(int i = 0; i < n;i++)
        {
            putchar('\\');
        }
    }
    putchar('\n');
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}