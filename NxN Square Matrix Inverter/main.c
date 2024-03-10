/* Filename: Exercise_5.c
   Description: Performing a square matrix inversion for a MxM matrix
   Author: Yee Zhen
   Date: 26/02/24
   I/O: Displays the output as an array of the inverted matrix
   Version: 2
*/

#include <stdio.h>

void printmatrix(int row, int column, float matrix[row][column]) { // Mainly here for troubleshooting (printf for matrices)
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%.4f ", matrix[i][j]);
        }
        printf("\n");
    }
}

float get_nonzero(int M, int N, float matrix[M][N], int row, int column,int mode) { // mode here distinguishes a call for getting
                                                                         // the absolute first value or a non 1 or 0 first value
    float result=1;
    for (int i = 0; i < M; i++) {
        if (matrix[row][i] == 0) {
            if (mode == 0) {
                continue;
            }
            else if (i == column && mode == 1) {
                result = matrix[row][i];
                break;
            }
            else {
                continue;
            }
        }
        else if (matrix[row][i] == 1 && mode == 1) {
            if (i == row) {
                continue;
            }
            else {
                result = matrix[row][i];
                break;
            }
        }
        else {
            result = matrix[row][i];
            break;
        }
    }
    return result;
}

void inverse_reduce_row_echelon(int M, float matrix[M][M]) {
    float supermatrix[M][2*M],first_non_zero_value,first_non_zero_value_2;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            supermatrix[i][j+M] = 0;
            supermatrix[i][j] = matrix[i][j];
        }
        supermatrix[i][i+M] = 1 ;
    }
    for (int i = 0; i < M; i++) { // row
        first_non_zero_value = get_nonzero(M,2*M,supermatrix,i,0,0);
        for (int j = 0; j < 2*M; j++) { // column
            supermatrix[i][j] /= first_non_zero_value;
        }
        for (int j = 0; j < M; j++) { // row
            first_non_zero_value_2 = get_nonzero(M,2*M,supermatrix,j,i,1);
            for (int k = 0; k < 2*M; k++) { // column
                if (j==i) {
                    continue;
                }
                else {
                    supermatrix[j][k] -= first_non_zero_value_2*supermatrix[i][k];
                }
            }
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            matrix[i][j] = supermatrix[i][j+M];
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            if (supermatrix[i][j]==0 || supermatrix[i][j]==1) {
                continue;
            }
            else {
                printf("Your matrix is singular, There is no solution.\n");
                goto terminate;
            }
        }
        if (i == M-1) {
            printf("-----Final Answer-----\n");
            printmatrix(M,M,matrix);
        }
    }
    terminate:
        return;
}

int main() {
    int M;
    printf("What size square matrix do you need? ->\n");
    scanf("%d",&M);
    float matrix[M][M];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("Row %d, Column %d >\n", i+1, j+1);
            scanf("%f",&matrix[i][j]);
        }
    }
    inverse_reduce_row_echelon(M,matrix);
    return 0;
}
