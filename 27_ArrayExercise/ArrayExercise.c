#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    int i, a[5];



    printf("Input Part-----------------------------\n");
    for(i=0; i<5; i++){
        printf("Please enter the element of array 'a' (%d/4):\n", i); 
        scanf("%d", &a[i]);   // C language does not allow input method(scanf...) to use number to represent the position of the element of an array directly.
    }



    printf("Output Part-----------------------------\n");
    for(i=0; i<5; i++){
        printf("Element %d: %d\n", i, a[i]);
    }



}