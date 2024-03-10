/* Filename: Exercise_4.c
   Description: Create an array of size M by N, then returns the mean and std. dev of the values inputted.
   Author: Yee Zhen
   Date: 26/02/24
   I/O: Size of array and values for each cell
   Version: 1
*/

#include <stdio.h>
#include <math.h>

int main() {
    int row,column;
    double increment=0,sum=0,squaredsum=0,mean,std_dev;
    printf("Row ->");
    scanf("%d",&row);
    printf("Column ->");
    scanf("%d",&column);
    int matrix[row][column];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("Enter value for row %d and column %d ->", i+1, j+1);
            scanf("%d", &matrix[i][j]);
            printf("\n");
            sum += matrix[i][j];
            increment++;
        }
    }
    mean = sum/increment;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            squaredsum += pow((mean-matrix[i][j]),2);
        }
    }
    std_dev = sqrt(squaredsum/increment);
    printf("Mean: %.2f | Standard Deviation: %.2f.\n",mean,std_dev);
    return 0;
}
