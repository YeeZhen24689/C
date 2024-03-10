/* Filename: Exercise_6.c
   Description: Displaying the binary and hexadecimal equivalent of any integer
   Author: Yee Zhen
   Date: 01/03/24
   I/O: Decimal integer
   Version: 1
*/

#include <stdio.h>
#include <math.h>

void binaryconverter(int);
void hexconverter(int);

int main() {
    int num;
    printf("Enter a value and I will convert it to its binary and hexadecimal equivalent.\n");
    scanf("%d",&num);
    printf("Binary: ");
    binaryconverter(num);
    printf("\nHexadecimal: ");
    hexconverter(num);
    /* // Sweep Code:
    for (int i = 0; i < 40000; i++) {
        binaryconverter(i);
        hexconverter(i);
    }*/
    return 0;
}

void binaryconverter(int decimal) {
    int checkingnum=1,iterate=0,most_significant_bit,temp,num=decimal;
    while (checkingnum >= 0) {
        iterate++;
        most_significant_bit = pow(2,iterate);
        checkingnum = decimal-most_significant_bit;
    }
    int answer[iterate], length=iterate-1;
    for (int i = length; i > -1; i--) {
        temp = decimal - pow(2,i);
        if (temp < 0) {
            answer[length-i] = 0;
        }
        else {
            answer[length-i] = 1;
            decimal = temp;
        }
    }
    for (int i = 0; i < length+1; i++) {
        printf("%d",answer[i]);
    }
    // Sweep -> printf(" | %d\n",num);
}

void hexconverter(int decimal) {
    int checkingnum=1,iterate=0,most_significant_bit,remainder,quotient=decimal;
    while (checkingnum >= 0) {
        iterate++;
        most_significant_bit = pow(16,iterate);
        checkingnum = decimal-most_significant_bit;
    }
    int answer[iterate],length=iterate;
    while (quotient > 0) {
        remainder = quotient%16;
        answer[iterate-1] = remainder;
        quotient /= 16;
        iterate--;
    }
    for (int i = 0; i < length; i++) {
        if (answer[i] > 9) {
            switch (answer[i]) {
                case 10: printf("A"); break;

                case 11: printf("B"); break;

                case 12: printf("C"); break;

                case 13: printf("D"); break;

                case 14: printf("E"); break;

                case 15: printf("F"); break;

                default: printf("Error");
            }
        }
        else {
            printf("%d",answer[i]);
        }
    }
   // Sweep -> printf(" | %d\n",decimal);
}