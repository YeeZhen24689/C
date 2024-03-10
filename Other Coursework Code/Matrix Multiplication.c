/* Filename: Exercise_6.c
   Description: A program that allows the user to enter values to two 2D arrays of (MxN) and (Nx1) respectively and display its output.
   Author: Yee Zhen
   Date: 26/02/24
   I/O: Array column, width and corresponding numbers which go into the array.
   Version: 1
*/

#include <stdio.h>

int main() {
    int row,column;
    printf("I will multiply two matrices of MXN and NX1!\n");
    printf("Row ->");
    scanf("%d",&row);
    printf("Column ->");
    scanf("%d",&column);
    int matrix[row][column], multiplicand[column][1],answer[row][1], sum=0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("Row %d, Column %d ->\n", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("---- Matrix 2 ----\n");
    for (int i = 0; i < row; i++) {
        printf("Row %d ->", i+1);
        scanf("%d", &multiplicand[i][0]);
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            sum += matrix[i][j] * multiplicand[j][0];
        }
        answer[i][0]=sum;
        sum = 0;
    }

    printf("---- Final Matrix Answer ---- (Top to bottom)\n");
    for (int i = 0; i < column; i++) {
        printf("%d\n",answer[i][0]);
    }
    return 0;
}
