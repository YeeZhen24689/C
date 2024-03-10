/* Filename: Exercise_6.c
   Description: Computes and displays the values of f(x) in a table
   Author: Yee Zhen
   Date: 09/02/23
   I/O: Starting Value and Interval
   Version:1
*/

#include <stdio.h>
#include <math.h>

int main() {
    int i;
    float startval,interval,currentnum,y;
    printf("Starting Value:");
    scanf("%f",&startval);
    printf("Interval:");
    scanf("%f",&interval);
    printf("/******************************/\n");
    printf("/  Value of x    Value of f(x) /\n");
    for (i = 1; i < 5; i++)
    {
        currentnum = startval + ((i-1)*interval);
        y = 3*sin(M_PI*currentnum) + 2*cos(M_PI*currentnum);
        printf("/    %.2f           %.2f       /\n",currentnum,y);
    }
    printf("/******************************/\n");

    return 0;
}
