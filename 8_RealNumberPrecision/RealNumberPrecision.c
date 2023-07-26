#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    float x;   // define a float variable
    x = 7.123456789; // give the float variable a value (over storage)

    printf("%12.10f", x); // the total length is 12, and the length of decimal place is 10
}


// The result(7.1234569550) is not accurate(different from the initial given) because float number just can contain 7 bits number, if over, the reset will be some error number.