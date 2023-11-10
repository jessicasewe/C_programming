#include <stdio.h>
#include "main.h"

/**
 * void print_square(int size): function that prints a square
 * 
*/

void print_square(int size){
    
    if(size <= 0){
        putchar('\n');
    }
    else
    {
        for(int i = 0; i < size;i++)
        {
            for(int j = 0; j < size;j++)
            {
                putchar('#');
            }
            putchar('\n');
        }
    }

}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}