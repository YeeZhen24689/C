/* Filename: Exercise_3.c
   Description: Seconds since midnight to current time calculator
   Author: Yee Zhen
   Date: 08/03/24
   I/O: Function - total seconds, hours, minutes and seconds
   Version: 1
*/

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main()
{
    int hr,min,sec;
    long total_sec;
    printf("Seconds since midnight ->");
    scanf("%d",&total_sec);
    split_time(total_sec,&hr,&min,&sec);
    printf("The current time is %d:%d:%d",hr,min,sec);
    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    for (int i = 0; i < 25; i++) {
        if (total_sec-(i*3600) < 0) {
            total_sec -= ((i-1)*3600);
            *hr = i-1;
            break;
        }
        else {
            continue;
        }
    }
    for (int i = 0; i < 61; i++) {
        if (total_sec-(i*60) < 0) {
            total_sec -= ((i-1)*60);
            *min = i-1;
            break;
        }
        else {
            continue;
        }
    }
    *sec = total_sec;
}
