/* Filename: Exercise_2.c
   Description: Arranging an input of four values in ascending and descending order
   Author: Yee Zhen
   Date: 16/02/24
   I/O: Four int values, Ascending or Descending
   Version: 1
*/

#include <stdio.h>

int main() {
    int num1,num2,num3,num4,First,Second,Third,Fourth;

    printf("Number 1 ->");
    scanf("%d",&num1);
    First = num1;

    printf("Number 2 ->");
    scanf("%d",&num2);
    if (num2 < First) {
        First = num2;
        Second = num1;
    } else {
        Second = num2;
    }

    printf("Number 3 ->");
    scanf("%d",&num3);
    if (num3 < First) { // We want to perform a forward shift in values
        Third = Second;
        Second = First;
        First = num3;
    }
    else if (num3 > Second) {
        Third = num3;
    }
    else if (num3 > First) {
        Third = Second;
        Second = num3;
    }

    printf("Number 4 ->");
    scanf("%d",&num4);
    if (num4 < First) { // Takes position 1
        Fourth = Third;
        Third = Second;
        Second = First;
        First = num4;
    }
    else if (num4 > First) { // Takes position 2
        Fourth = Third;
        Third = Second;
        Second = num4;
    }
    else if (num4 > Second) { // Takes position 3
        Fourth = Third;
        Third = num4;
    }
    else if (num4 > Third) { // Takes position 4
        Fourth = num4;
    }

    printf("Your numbers in ascending order is %d %d %d %d.\n",First, Second, Third, Fourth);
    printf("Your numbers in descending order is %d %d %d %d.",Fourth, Third, Second, First);


    return 0;
}
