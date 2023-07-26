#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    int i, j, c1, c2, c3, c4;
    i = 10;  
    j = 12;
    c1 = ~i;   // int --> bit (complement)  --> ~bit --> new bit --> new int
    c2 = i & j;  // int1, int2 --> bit1, bit2  (complement)  --> bit1 & bit2 --> new bit --> new int
    c3 = i | j;  // int1, int2 --> bit1, bit2  (complement)  --> bit1 | bit2 --> new bit --> new int
    c4 = i ^ j;  // int1, int2 --> bit1, bit2  (complement) --> bit1 ^ bit2 --> new bit --> new int

    printf("~i = %d\n", c1);
    printf("i & j = %d\n", c2);
    printf("i | j = %d\n", c3);
    printf("i ^ j = %d\n", c4);


    //-------------------------------------------
    int a, b;
    a = -15;

    b = a >> 2;   // step1: -15  --> 10001111 (original)
                  // step2: 10001111 (original) --> 11110000(radix-minus-one complement)
                  // step3: 11110000(radix-minus-one complement) --> 11110001(complement)
                  // step4: 11110001(complement) >>2   --> 11111100(complement)  (notice: this example use 1 to cover the highest bit)
                  // step5: 11111100(complement)  --> 11111011(radix-minus-one complement) 
                  // step6: 11111011(radix-minus-one complement)  -->  10000100(original)
                  // step7: 10000100(original)  -->  -4
                  
    printf("b = %d", b);



}