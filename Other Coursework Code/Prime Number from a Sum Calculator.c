/* Filename: Exercise_3.c
   Description: Takes two inputs between 0 and 100, then finds the sum and reports if the sum is a prime number.
   Author: Yee Zhen
   Date: 23/02/24
   I/O: Two integers between 0 and 100
   Version: 1
*/

#include <stdio.h>

int main() {
    int num1,num2,result,prime=1;
    printf("Number 1 ->");
    scanf("%d", &num1);
    printf("Number 2 ->");
    scanf("%d", &num2);
    result = num1 + num2;

    // The biggest result we can obtain is 200. So, we can try to divide the number by all other numbers.

    for (int i=2; i<200; i++) {
        if (result%i == 0 && i != result && i != 0) {
            prime = 0;
            break;
        }
    }

    if (prime == 1) {
        printf("%d + %d is %d. This answer is prime.",num1,num2,result);
    } else {
        printf("%d + %d is %d. This answer is not prime.",num1,num2,result);
    }
    return 0;
}
