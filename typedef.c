#include <stdio.h>
#include <string.h>

/**
 * typedef = reserved keyword that gives existing datatype a "nickname"
*/

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User; //datatype's nickname


int main()
{
    User user1 = {"Jessica", "password123", 123455};
    User user2 = {"Sewe", "password321", 9876543};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);

    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;


}