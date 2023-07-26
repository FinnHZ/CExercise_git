#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    int a = 1, b = 4, c = 2;
    float x = 10.5, y = 4.2, z;
    z = (a + b) / c + (int) y % c * 1.2 + x;
    //= 5 / 2 + 4 % 2 * 1.2 + 10.5
    //= 2 + 0 *1.2 + 10.5
    //= 2 + 0 + 10.5
    //= 12.5
    printf("%f\n", z);  // z = 12.5
}