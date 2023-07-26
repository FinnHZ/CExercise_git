#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "CallFunc_Advanced.h"

int c, a = 4;  // The variable must be declared first before we want to use.

void main(){
    int b = 2, p = 0;
    c = 1;
    p = abc(b, a);   
    printf("%d, %d, %d, %d\n", a, b, c, p);
    getch();
}


// Even if he c language is a 'Procedural oriented programming' language, we also can call the function which is defined after the main function, if we pre-define the other function in a head file and import the head file first.
// The pre-define si very similar to the abstract in C#!!!!


int abc(int a, int b){    // the 'abc' is the function name
    c = a * b;
    a = b - 1;
    b++;
    return (a+b+1);
}


