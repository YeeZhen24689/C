/* Filename: Exercise_3.c
   Description: Input checker for a specified range, prompts for another value if entered value is out of range.
   Author: Yee Zhen
   Date: 05/03/24
   I/O: Integer which may be in or out of range
   Version: 1
*/

#include <stdio.h>

int between_X_and_Y(int,int,int);

int main() {
    int min = 0, max = 10, choice;
    printf("Pick a number between %d and %d.",min,max);
    scanf("%d",&choice);
    choice = between_X_and_Y(choice,min,max);
    return 0;
}

int between_X_and_Y(int num, int min, int max) {
    if (num > min && num < max) {
        printf("Your number %d is between the range given, congrats.\n",num);
        return num;
    } else {
        printf("Your number is not between the range given. Try again.\n");
        main();
        return 0;
    }
}
