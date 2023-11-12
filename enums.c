#include <stdio.h>
#include <string.h>

/**
 * enums = a user defined type of name integer identifiers
 * helps to make program ore readable
*/

enum Day {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5, Fri = 6, Sat = 7};

int main(){

    enum Day today = Fri;

    if(today == Sun || today == Sat){
        printf("It's the weekend, lets party\n");
    }
    else{
        printf("i have to work :(\n");
    }

    return 0;

}