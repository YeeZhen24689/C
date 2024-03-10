/* Filename: Exercise_4.c
   Description: Input data type checker, outputs whether the data type is the correct type (Works for char and int only)
   Author: Yee Zhen
   Date: 05/03/24
   I/O: Int or non Int values, Char or non Char values
   Version: 1
*/

#include <stdio.h>

int text;

int* scanfplus(int);

int main() {
    int inputi,checking=1;
    char inputc;
    switch (checking) {
        case 0:
            printf("Please enter an integer value.\n");
            inputi = (int)*scanfplus(checking);
            printf("Your input is %d",inputi);
            break;
        case 1:
            printf("Please enter a character.\n");
            inputc = (char)*scanfplus(checking);
            printf("Your input is %c",inputc);
            break;
        default:
            printf("Not a possible data type I can check.");
    }
    return 0;
}

int* scanfplus(int type) {
    int success_input;
    char slash_n=0;
    do {
        switch (type) {
            case 0:
                success_input = scanf("%d%c",&text,&slash_n);
                break;
            case 1:
                success_input = scanf("%c%c",&text,&slash_n);
                break;
            default:
                printf("That is not a valid type");
        }
        if (success_input == 0 || slash_n != '\n') {
            printf("That is the wrong data type. Please try again.\n");
            fflush(stdin); // Works for this example, but to be used sparingly.
        }
    } while (slash_n != '\n' || success_input == 0);
    printf("You have entered the correct data type\n");
    return &text;
}
