#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){            // find all prime number in range 1 to 100
    int i, j, n, a[101];

    for(i=1; i<=100; i++){
        a[i] = i;
    }
    // printf("%d", a[0]);   // we don't give value to a[0], because we will start to check each number from 1

    a[1] = 0;   // remove 1 
    
    for(i=2; i<sqrt(100); i++){  //sqrt(100) is 10, less than 10, that means check all number which can be divisible by 2,3,4...9
        for(j=i+1; j<=100; j++){
            if(a[i] != 0 && a[j] != 0){  //a[i] = 2,3,4.....9
                if(a[j] % a[i] == 0){
                    a[j] = 0;
                }
            }
        }
    }

    for(i=1,n=0; i<=100; i++){
        if(a[i] !=0){
            printf("%5d", a[i]);
            n++;
        }
        if(n % 10 ==0){
            printf("\n");
            n = 0;
        }
    }
    printf("\n");

}