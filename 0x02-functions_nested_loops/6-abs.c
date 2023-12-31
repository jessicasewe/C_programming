#include <stdio.h>
#include "main.h"

/**
 * int _abs(int): computes  the absolute value of an integer
 * Return: 0;
*/

int _abs(int n){
        
    if(n >= 0){
        return (n);
    }

    return (-n);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}