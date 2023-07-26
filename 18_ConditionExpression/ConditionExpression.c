#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    int a = 3;
    int b = 4;
    int c;

    c = a > b ? ++a: ++b;

    printf("a = %d \n", a);
    printf("b = %d \n", b);
    printf("c = %d \n", c);

}