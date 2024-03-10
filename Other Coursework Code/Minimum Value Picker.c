/* Filename: Exercise_1.c
   Description: Picks the smallest number from four given inputs.
   Author: Yee Zhen
   Date: 16/02/24
   I/O: Four int values
   Version: 1
*/

#include <stdio.h>

int main() {
    int num1,num2,num3,num4,min;
    printf("Number 1 ->");
    scanf("%d",&num1);
    printf("Number 2 ->");
    scanf("%d",&num2);
    printf("Number 3 ->");
    scanf("%d",&num3);
    printf("Number 4 ->");
    scanf("%d",&num4);
    min = num1;

    if (min > num2) {
        min = num2;
    }
    if (min > num3) {
        min = num3;
    }
    if (min > num4) {
        min = num4;
    }

    printf("The smallest number you entered is %d",min);

    return 0;
}
