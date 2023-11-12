#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *  void puts_half(char *str): prints half of a string;
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str = input
 * Return half of input;
*/

void puts_half(char *str){

    int length = 0;
    int i;

    while(str[length] != '\0')
    {
        length++;
    }

    if(length % 2 == 0)
    {
        i = length / 2;
    } 
    else
    {
        i = (length - 1) / 2;
    }

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
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
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}