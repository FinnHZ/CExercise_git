#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
    int i, arr[10] = {15,5,2,36,11,9,0,6,2,100}, j=0;
    int a, b;
    //sort array-----------
    while(j < 9){    // we just need to compare 9 times here, becuase the size of the array is 10. We can get one max number of the number every comparison.
        for(i=0; i<9; i++){   // <9 because we will compare i and i+1 position. This setting will prevent the i+1 from being greater than 9(max is 9)
            a = arr[i];
            b = arr[i+1];
            if(a > b){
                arr[i] = b;
                arr[i+1] = a;
            }
        }
        j += 1;    
    }
    //show the new sequnence one by one-----------
    for(i=0; i<10; i++){
        printf("%d\n", arr[i]);
    } 

}