#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){

    // int a;
    // float b;
    // printf("Please enter the first number as integer result, and the second number as float result:");
    // scanf("%d%f", &a, &b);   // input first, and then enter, and then input second/ use empty or Tab to separate
    // printf("a=%d, b=%f\n", a, b);


    // int c;
    // float d;
    // printf("Please enter the first number as integer result, and the second number as float result at the same time:");
    // scanf("%d, %f", &c, &d);   // input the first and the second with the same format to the string part
    // printf("c=%d, d=%f\n", c, d);


    // int e, f;
    // printf("Please enter the first number as integer result, and the second number as float result together(use count of the number to indicate the length fo two number):");
    // scanf("%2d%4d", &e, &f);   
    // printf("e=%d, f=%d\n", e, f);

    // char g, h, i, j;
    // printf("Please enter a whole string(1st):\n");
    // scanf("%2c%c", &g, &h);   
    // printf("g=%c, h=%c\n", g, h);
    // printf("Please enter a whole string(2nd):\n");
    // scanf("%2c%3c", &i, &j);   
    // printf("i=%c, j=%c\n", i, j);

    // int k, l;
    // printf("Please enter the first number as integer result, and the second number as float result together(use count of the number to indicate the length fo two number):");
    // scanf("%2d %*3d %2d", &k, &l);   ?????
    // printf("k=%d, l=%d\n", k, l);

    // char m;
    // char m1;
    // int n;
    // printf("Please enter a number :");  //if input 20, 'm' will just get the first string of the '20', but the 'n' will get the second string of '20', and it will be transform into the ASCII code. 
    // m = getchar();
    // m1 = scanf("%c", &m1);
    // n = getchar();
    // printf("m=%c, n=%d, m1=%c", m, n, m1);

    char o = 'A';
    putchar(o);
    printf("\n");

    int p = 98;
    putchar(p);    // if the parameter is a integer, it will look the integer(98) as the ASCII code of an object.
    printf("\n");

    char q = 'A';
    putchar(q + 4);  // putchar can output a result of an expression as a string object. If there is integer in the expression, but the parameter is a string, it will transform the string to its ASCII code and use the code(integer) to calculate with the integer of the expression. Finally, it will output the object which has the corresponding ASCII code result.
    printf("\n");



}