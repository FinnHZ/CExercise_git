#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    //Generate a double dimensional array
     //option 1:
    int da[4][4] = {4,8,7,6,1,3,5,7,2,6,9,4,5,1,2,3};
     //option 2:
    // int da[4][4] = {{4,8,7,6},
    //                {1,3,5,7},
    //                {2,6,9,4},
    //                {5,1,2,3}};

    //Calculate the sum of principal diagonal elements of a 4x4 matrix  (principal diagonal: row mark-number == column mark-number)
    int i, j, sum = 0;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i == j){
                sum = sum + da[i][j];
            }
        }
    }

    printf("sum is %d", sum);   // should be 19

}