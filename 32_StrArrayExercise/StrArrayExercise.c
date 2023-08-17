#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){     // input the letter of a word one by one, and then trun them upside down.
    int i, j, k;
    char str[5];
    char tem;
    for(i=0; i<5; i++){
        printf("Please enter the %d/5 letter:", i+1);
        tem = getchar();
        if(tem != '\n'){  // Please note!!!!: a single '\n' is just one char, so we should use single quotes.
            str[i] = tem;
        }else{
            str[i] = getchar();   // use two getchar to get value, because the first time may just can receive a '\n'
        }
         
    }


    for(i=0, j=4; i<j; i++, j--){  //multiple conditions
        k = str[i];
        str[i] = str[j];
        str[j] = k;
    }


    printf("The reversal string of your word is:\n");
    for(i=0; i<5; i++){
        printf("%c", str[i]);
    }
}