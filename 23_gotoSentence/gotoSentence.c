#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    /*
    goto sentence can make the program process go to the specific sentence, and make the process after the specific sentence be executed again.
    */
    int i, sum;

    i = 1;

    sum = 0;

    loop:if(i <= 5){  // goto sentence and if sentence can be grouped as a loop structure..
        sum = sum + i;
        i++;
        goto loop;
    }
    printf("sum=%d\n", sum);


//***********************************************************

    int i_1, sum_1;

    i_1 = 1;

    sum_1= 0;

    for(i_1=1; i_1<=5; i_1++){
        sum_1 = sum_1 + i;
    }
    printf("sum_1=%d\n", sum);


//***********************************************************
    int i_2, sum_2;

    i_2 = 1;

    sum_2 = 0;

    someone_2: sum_2 = sum_2 + 10;


    loop_2:if(i_2 <= 5){
        sum_2 = sum_2 + i_2;
        i_2++;
        goto someone_2;
    }
    printf("sum_2=%d\n", sum_2);

//***********************************************************
    int i_3, sum_3;

    i_3 = 1;

    sum_3 = 0;

    loop_3: sum_3 = sum_3 + i_3;

    if(i_3 < 5){           // here is <, not <=
        i_3++;       
        goto loop_3;
    }
    printf("sum_3=%d\n", sum_3);


    
}