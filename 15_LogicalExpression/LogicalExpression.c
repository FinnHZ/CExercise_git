#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){

int bool_a, bool_b, bool_c;

char ch = 'r';

bool_a = (ch >= 'a' && ch<='z');
bool_b = (ch >= 'A' && ch<='Z');
bool_c = (bool_a || bool_b);

printf("%d",bool_a);
printf("%d",bool_b);
printf("%d",bool_c);

}