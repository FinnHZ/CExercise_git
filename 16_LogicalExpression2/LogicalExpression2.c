#include <stdio.h>
#include <conio.h>
#include <math.h>



void main(){
    char ch;
    int s1 = 0;
    int s2 = 0;
    while ((ch = getchar()) != '\n'){
        if(ch >= '0' && ch <= '9'){
            s1++;
        }
        if(ch >= 'a'&&ch <='z' || ch >='A'&&ch <= 'Z'){
            s2++;
        }
    }
    printf("%d \t %d \n", s1, s2);



}