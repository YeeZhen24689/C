/* Filename: Exercise_4.c
   Description: Converts from miles per hour to kilometres per hour
   Author: Yee Zhen
   Date: 09/02/23
   I/O: Distance in miles per hour
   Version:2
*/

#include <stdio.h>

int main() {
    float speed,answer;
    printf("Please enter speed in miles per hour: ");
    scanf("%f",&speed);
    answer = speed*1.609;
    printf("Your speed in kilometres per hour is %.1f.", answer);

    return 0;
}
