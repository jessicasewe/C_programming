#include <stdio.h>
#include "main.h"
/**
 * int _isalpha(int c): checks for alphabetic character
 * Return: 1 if c  is a letter 
 * lowercase or uppercase
*/

int _isalpha(int c){
    
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    putchar(r + '0');
    r = _isalpha('o');
    putchar(r + '0');
    r = _isalpha(108);
    putchar(r + '0');
    r = _isalpha(';');
    putchar(r + '0');
    putchar('\n');
    return (0);
}