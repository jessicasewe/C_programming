#include <stdio.h>

int main()
{
    // unsigned int c = 78;
    // printf("%d", c);

    // int first = 8;
    // float second = 3;

    // float total = first / second;
    // printf("%f", total);
    char name[25];

    printf("whats your name: ");
    fgets(name, 25, stdin);

    int age;
    printf("How old are you? ");
    scanf("%d", &age);

    printf("Hello, %s", name);

    printf("You are %d years old", age);
}