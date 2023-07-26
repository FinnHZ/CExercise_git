#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    float x;
    int a;
    printf("Enter a float number:");   // input  -- > 123.456
    scanf("%f", &x);  // save the number of input into the address of variable 'x' as a float number
    a = (int)x % 10; // force tranform the float 'x' into int 'x', it will delete the number after decimal point, and then use the int 'x' % 10
    printf("a = %d \n", a);  //Output: a = 3

}


