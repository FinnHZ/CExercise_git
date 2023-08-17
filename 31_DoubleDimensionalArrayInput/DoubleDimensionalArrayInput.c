#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    int i, j, a[2][3];
      //Option 1: As row-input------------------------------
    // for(i=0; i<2; i++){
    //     for(j=0; j<3; j++){
    //         printf("Please input the %d row -- %d column number:\n", i, j);
    //         scanf("%d", &a[i][j]);
    //     }
    // }


      //Option 2: As column-input  (difference input sequence)-------------------------
    for(j=0; j<3; j++){
        for(i=0; i<2; i++){
            printf("Please input the %d column -- %d row number:\n", j, i);
            scanf("%d", &a[i][j]);
        }
    }  


    //Output matrix---------------------------------
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            if(j < 2){
                printf(" %d ", a[i][j]);
            }else{
                printf(" %d ", a[i][j]);
                printf("\n");
            }
        }
    }

}