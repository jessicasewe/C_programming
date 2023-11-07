#include <stdio.h>

int main(){
    
    char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
    
    char b;

    for(b = 0; b < 26; b++)
    {
        putchar(alphabets[b]);
    }
    
    putchar('\n');
    return(0);

}