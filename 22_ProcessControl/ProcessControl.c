#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){

    //if.. else..
    printf("if..else..\n");
    int a = 70;
    int b = 85;

    if(a >= b){
        printf("a: %d\n", a);
    }else{
        printf("b: %d\n", b);
    };

    //switch....case...
    printf("switch...case...\n");
    printf("break\n");

    char c = 'A';

    switch(c){
        case 'A': printf("85~100\n");   //switch...case...: It must be a constant/constant expression, which followed the 'case'.
        break;
        case 'B': printf("70~84\n");
        break;
        case 'C': printf("60~69\n");
        break;
        case 'D': printf("<60\n");
        break;
        default: printf("Error\n");
    }

    //for loop
    printf("for loop\n");
    int s, i;
    s = 0;
    for(i=1; i<=10; i++){
        s += i;
        printf("1st forLoop %d\n", s);
        if(s <=30){
            continue;
        };
        printf("2nd forLoop %d\n", s);
    };


    //while loop
    printf("while loop\n");

    int q = 0;
    while(q <= 10){
        printf("whileLoop %d\n", q);
        q += 1;
    };


    //do...while
    printf("do...while...\n");

    int w = 0;
    do{
        printf("do...while... %d\n", w);
        w += 1;
    }while(w <= 10);


    // goto sentence: please check the next individual project.


}





