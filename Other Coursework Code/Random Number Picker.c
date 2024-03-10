/* Filename: Exercise_7.c
   Description: Picks a random number between two numbers 0 and a max input
   Author: Yee Zhen
   Date: 09/02/23
   I/O: Maximum number
   Version:1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num,answer;
    srand(time(0));
    printf("Choose a random number between 0 and ->");
    scanf("%d",&num);
    answer = (rand() % num)  + 1 ;
    printf("I choose number %d.",answer);
    return 0;
}
