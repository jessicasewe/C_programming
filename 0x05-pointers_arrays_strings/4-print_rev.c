#include <stdio.h>
#include "main.h"
#include <string.h>


void print_rev(char *s){
    int length = strlen(s);

    for(int i = length -1; i >= 0; i--){
        printf("%c", s[i]);
    }

    printf("\n");

}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
