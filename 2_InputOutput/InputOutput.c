#include<stdio.h>
#include<conio.h>  
// #include<stdlib.h>
void main(){
    int a, b, sum;
    printf("Please enter a values: ");
    scanf("%d", &a);
    printf("Please enter b values: ");
    scanf("%d", &b);

    sum = a+b;
    printf("sum=%d\n",sum);
    getch();    // #include<conio.h> and getch() can make stop the console from closing.
}


