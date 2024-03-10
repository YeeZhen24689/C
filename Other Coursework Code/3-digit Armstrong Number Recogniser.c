/* Filename: Exercise_7.c
   Description: Checks whether number is an armstrong number.
   Author: Yee Zhen
   Date: 16/02/24
   I/O: One three digit number
   Version: 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num,digi_1,digi_2,digi_3,ans;
    printf("Input a 3 digit number and I will tell you if its an armstrong number ->");
    scanf("%d",&num);

    digi_1 = num%10; // The ones digit of the number
    digi_2 = ((num - digi_1)%100)/10; // The tens digit of the number
    digi_3 = (num - 10*digi_2 - digi_1)/100; // The hundreds digit of the number
    ans = pow(digi_1,3)+pow(digi_2,3)+pow(digi_3,3);

    if (ans == num) {
        printf("%d is an armstrong number!",num);
    } else {
        printf("%d is not an armstrong number.",num);
    }

    return 0;
}
