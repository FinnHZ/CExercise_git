#include <stdio.h>
#include <conio.h>
#include <math.h>

int c, a = 4;


int abc(int a, int b){    // the 'abc' is the function name
    c = a * b;
    a = b - 1;
    b++;
    return (a+b+1);
}



void main(){
    int b = 2, p = 0;
    c = 1;
    p = abc(b, a);   // The c language is a 'Procedural oriented programming' language, so the function/variable you want call must be defined bdefore you call(define part should be in front of the call sentence).
    printf("%d, %d, %d, %d\n", a, b, c, p);

}


