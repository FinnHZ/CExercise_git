#include<stdio.h>
#include<conio.h>

void main(){
    int k = 0; char c = 'A';
    do {
        switch (c++)    
        {
        case 'A':
            printf("A --  ");
            printf("%d--%c,\n",k, c);
            k++; 
            break;
        case 'B':
            printf("B --  ");
            printf("%d--%c,\n",k, c);
            k--; 
            break;
        case 'C':
            printf("C --  ");
            printf("%d--%c,\n",k, c);
            k += 2; 
            break;
        case 'D':
            printf("D --  ");
            printf("%d--%c,\n",k, c);
            k = k % 2; 
            break;
        case 'E':
            printf("E --  ");
            printf("%d--%c,\n",k, c); 
            k = k * 10; 
            break;
        default:
            printf("default --  ");
            printf("%d--%c,default \n",k, c);
            k = k / 3;
            break;
        }
        k++;
    }while(c < 'G');
    printf("k = %d\n", k);
}