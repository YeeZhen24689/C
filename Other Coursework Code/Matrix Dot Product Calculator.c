/* Filename: Exercise_6.c
   Description: Function to compute the dot product of two vectors
   Author: Yee Zhen
   Date: 09/03/24
   I/O: Array of two 1xN vectors
   Version: 1
*/

#include <stdio.h>

void dot_product(int length,float arr1[], float arr2[], float *returnarr);

int main() {
    int size;
    printf("Size of arrays ->");
    scanf("%d",&size);
    float arr1[size],arr2[size],answer=0;
    for (int i = 0; i < size; i++) {
        printf("Array 1: [%d] ->",i);
        scanf("%f",&arr1[i]);
    }
    for (int i = 0; i < size; i++) {
        printf("Array 2: [%d] ->",i);
        scanf("%f",&arr2[i]);
    }
    dot_product(size,arr1,arr2,&answer);
    printf("\nYour dot product is %.1f",answer);
    return 0;
}

void dot_product(int length,float arr1[], float arr2[], float *returnnum) {
    for (int i = 0; i < length; i++) {
        *returnnum += arr1[i]*arr2[i];
    }
}