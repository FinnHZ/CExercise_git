#include <stdio.h>
#include <conio.h>  
#include <math.h>
// #include<stdlib.h>

void main(){
    float a, b;
    printf("Please enter a: ");
    scanf("%f", &a);
    a = fabs(a); // make sure the input number is a postive number
    b = sqrt(a); // sqrt the a
    printf("%f", b);
    getch();    // #include<conio.h> and getch() can make stop the console from closing.
}


