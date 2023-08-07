#include <stdio.h>
#include <conio.h>
#include <math.h>

/*Decomposition prime factor*/
void main(){
    int n, i;
    printf("\nplease input a number:\n");
    scanf("%d", &n);
    // Input a integer
    printf("%d=", n);
    for(i=2; i<=n; i++){    // The minimum prime factor is 2, so we start from 2  
        while(n != i){
            if(n%i == 0){   // If 'n' is divisible by 'i', 'i' should be one of the prime factors of 'n'
                printf("%d*", i);
                n = n/i;  // Use quotient to continue until 'n' == 'i'
            }else break; // And the factor must be less than the number we input
        }
    } 
    printf("%d", n);


}