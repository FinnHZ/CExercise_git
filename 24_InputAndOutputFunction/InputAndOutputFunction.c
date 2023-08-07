#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    int a = 100;
    float b;
    char c[] = "Hello!";
    printf("This is %dst Input&Output test below... \n", 1);
    printf("%s Please input a number: \n", c);
    scanf("%d", &a);
    printf("This is what you input: %d \n", a);
    printf("The float of a is %f \n", b =(float)a);
    printf("The decimal of 'a' is %d \n", a);
    printf("The octal of 'a' is %o \n", a);
    printf("The hexadecimal of 'a' is %x \n", a);
    printf("The single char of 'a' is a char: %c \n", a);
    printf("The exponential form of 'a' is %e \n", a);
    printf("The percent form of 'a' is %f%% \n", a);

    printf("******************************************** \n");

    // int d = -10;
    // printf("The unsinged of 'd' is %u \n", d);

}
