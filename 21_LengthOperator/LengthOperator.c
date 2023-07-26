#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>


void main(){
    int a1, a2, b, c;
 
    printf("The length of a char?(that different from the textbook): ");
    a1 = sizeof("1");
    printf("%d", a1);
    printf("\n");

    printf("The length of a char?(that different from the textbook): ");
    a2 = sizeof('1');
    printf("%d", a2);
    printf("\n");

    printf("The length of a integer: ");
    b = sizeof(1);
    printf("%d", b);
    printf("\n");

    printf("The length of a float: ");
    c = sizeof(1.0);
    printf("%d", c);
    printf("\n");
    
    
    //-------------------------------------------------------
    int aa, bb, cc;
    printf("The length of a aa: ");
    aa = sizeof(100);
    printf("%d", aa);
    printf("\n");

    printf("The length of a bb?(that different from the textbook): ");
    bb = sizeof('a');   
    printf("%d", bb);
    printf("\n");

    // printf("The length of a cc: ");
    // cc = sizeof(struct ABC);
    // printf("%d", cc);
    // printf("\n");
}