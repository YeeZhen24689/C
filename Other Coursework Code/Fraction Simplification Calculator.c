/* Filename: Exercise_5.c
   Description: A function that computes the simplest form of a fraction (void function)
   Author: Yee Zhen
   Date: 01/03/24
   I/O: A fraction a/b
   Version: 1
*/

#include <stdio.h>

void simplifier(int nominator, int denominator, int output[2]);
int greatest_common_factor(int a, int b);

int main() {
    int nominator, denominator, output[2];
    printf("Enter nominator ->");
    scanf("%d", &nominator);
    printf("Enter denominator ->");
    scanf("%d", &denominator);
    simplifier(nominator,denominator,output);
    printf("Your final fraction is %d/%d.",output[0],output[1]);
    return 0;
}

void simplifier(int nominator, int denominator, int output[2]) {  // Changes the pointer output[2]
    int GCFactor;
    GCFactor = greatest_common_factor(nominator,denominator);
    output[1] = denominator/GCFactor;
    output[0] = nominator/GCFactor;
    return;
}

int greatest_common_factor(int a, int b) {  //Euclid's Algorithm (Neso Academy, 2021)
    int max,min,remainder;
    if (a<b) {
        max = b;
        min = a;
    }
    else {
        max = a;
        min = b;
    }
    while (min > 0) {
        remainder = max%min;
        max = min;
        min = remainder;
    }
    return max;
}