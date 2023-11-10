#include <stdio.h>
#include "main.h"

/**
 * int _strlen(char *s): prints the length of a string
*/

int _strlen(char *s)
{
    int length = 0;

    while(*s != '\0')
    {
        
        length++;
        s++;
    }
    
    return length;
    
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}