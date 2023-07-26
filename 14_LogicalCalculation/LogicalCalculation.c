#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    int a = 3;
    int b = 4;
    int c = 5;
    int r_1, r_2;

    r_1 = !(a + b) * c - 1 && b + c % 2;

    printf("%d", r_1);

    printf("\n");
    r_2 = (!(a + b) * c - 1) && (b + c % 2);

    printf("%d", r_2);

}