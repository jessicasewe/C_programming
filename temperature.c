#include <stdio.h>
#include <ctype.h>
 
int main(){

    char unit;
    float temp;

    printf("is the temperature (F) or (C): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'F')
    {
        printf("temp is currently F");
    }
    else if(unit == 'C')
    {
        printf("temp currently C");
    }
    else{
        printf("%c is not a valid unit of measurement", unit);
    }

    return (0);
}