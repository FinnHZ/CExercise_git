#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    // determine if the ones digit of the input number is odd and the tens digit is even.
    int k;
    scanf("%d", &k);   // get the value of input an give it to variable 'k'
    
    if (k /10 % 2 == 0 && k % 2 == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

}