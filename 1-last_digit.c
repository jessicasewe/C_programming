#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
    
    if(last_digit > 5)
    {
        printf("last digit of %d is %d and greater than 5",n, last_digit);
    }
    else if(last_digit == 0)
    {
        printf("last digit of %d is %d and is zero", n, last_digit);
    }
    else if(last_digit < 6 && last_digit != 0)
    {
        printf("last digit of %d is %d and Less than 6 and not 0", n, last_digit);
    }
	return (0);
}