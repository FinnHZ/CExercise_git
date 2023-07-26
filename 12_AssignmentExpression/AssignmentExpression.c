#include <stdio.h>
#include <conio.h>
#include <math.h>



void main(){
    int a = 10;
    a/= 3;   //a = a / 3;  --->  3.33333
    printf("%f", a);  // this a will be 0.000, because 'a' is a int type number, but the real result is 3.3333, they are conflict with each other, so it will get a 0.000.


}