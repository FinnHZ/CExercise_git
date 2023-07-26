#include<stdio.h>
#include<conio.h>
#include<math.h>


void main(){
    int k1, k2, a, b;
    k1 = 3;
    k2 = 3;
    a = ++k1;  // 1) k1 +1; >> 2) a = k1 >> a = 4, k1 = 4
    b = k2--;  // 1) b = k2; >> 2) k2 -1 >> b = 3, k2 = 2
    printf("a = %d, k1 = %d\n", a, k1);   
    printf("b = %d, k2 = %d\n", b, k2);
}



