#include <stdio.h>
#include "main.h"

/**
 * void times_table(void): prints 9 times starting with 0
 * return: nothing
*/

void times_table(void){
    int num , num_2;

    for(num = 0; num <= 9; num++){
        for(num_2 = 0; num_2 <= 9; num_2++){
           printf("%d X %d = %d\n", num, num_2, num * num_2);
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
    times_table();
    return (0);
}