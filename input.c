#include <stdio.h>

int main()
{
    //specify the number characters it can take
    char name[25];
    
    //using fgets to accept spaces and characters after the space 
    printf("whats your name: ");
    fgets(name, 25, stdin);


    int age;
    printf("How old are you? ");
    scanf("%d", &age);

    printf("Hello, %s", name);

    printf("You are %d years old", age);
}