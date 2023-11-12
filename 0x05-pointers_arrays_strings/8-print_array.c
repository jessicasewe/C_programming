#include <stdio.h>
#include "main.h"
#include <string.h>


void print_array(int *a, int n)
{
    int i;
    for(i = 0; i < (n -1); i++){
        printf("%d ", a[i]);
    }

    if(i == (n -1)){
        printf("%d", a[n - 1]);
    }
    
    printf("\n");
}



/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}