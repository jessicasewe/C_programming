#include <stdio.h>

double square(double x){
    return x * x;
}

int main(){
    double x = square(5);
    printf("%lf", x);
}