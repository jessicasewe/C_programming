#include <stdio.h>
#include <string.h>

int main() {

    char name[25];  

    printf("Whats your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\nYou did not print your name");
        printf("\nWhats your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    return 0;
    
}