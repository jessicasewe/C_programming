#include <stdio.h>
#include <string.h>

int main(){

    char x[] = "water";
    char y[] = "paint";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s", y);

    return 0;
}