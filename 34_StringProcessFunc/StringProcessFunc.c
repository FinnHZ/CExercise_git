#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>



void main(){
    char str_get[10];  //="how "    --for strcat use
    printf("Please enter one string data 1:\n");
    scanf("%s", str_get);
    ////gets()---------------------------------------------------------------------------------------------------------------------1
    // int *i            //pointer????????????????????????????
    // i = gets(str_get);
    // printf("%d", i);   
    ////puts()---------------------------------------------------------------------------------------------------------------------2
    // puts(str_get);
    ////strlen()-------------------------------------------------------------------------------------------------------------------3
    // printf("%d", strlen(str_get));
    ////strcmp()-------------------------------------------------------------------------------------------------------------------4
    // int n;
    // char str_get2[20];
    // printf("Please enter one string data 2:\n");
    // scanf("%s", str_get2);
    // n = strcmp(str_get, str_get2);
    // printf("%d", n);
    ////strcpy(), strncpy()--------------------------------------------------------------------------------------------------------5
    // char str_get3[20]="\0"; // the containter size must be equal to/greater than the original object.
    // char str_get4[20]="\0";
    // int m;
    // printf("Please enter a number for limited copy action:\n");
    // scanf("%d", &m);
    // strcpy(str_get3, str_get);    // copy the content of 'str_get' into 'str_get3'
    // strncpy(str_get4, str_get, m);  // copy the first 'm' bit of the  content of 'str_get' into 'str_get4'
    // printf("copy result(str_get3): %s \n", str_get3);
    // printf("copy limited result(str_get4): %s \n", str_get4);
    ////strcat()--------------------------------------------------------------------------------------------------------------------6
    char str_get5[20]; //= "are you?"
    printf("Please enter one string data 5:\n");
    gets(str_get5);        // scanf() can't input string with empty, so we use gets() to input a string for 'str_get5'
    gets(str_get5);        // The first gets() may be ignored, so there is one more gets() for getting string from input.
    printf("str_get5: %s\n", str_get5);
    strcat(str_get, str_get5);
    printf("There is the connected result of str_get and str_get5:\n");
    printf("%s", str_get);
}