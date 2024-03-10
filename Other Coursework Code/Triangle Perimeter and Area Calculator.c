/* Filename: Exercise_5.c
   Description: Computes the perimeter and area of a triangle
   Author: Yee Zhen
   Date: 09/02/23
   I/O: Height and Length of triangle
   Version:2
*/

#include <stdio.h>
#include <math.h>

int main() {
    float length,height,area,perimeter,hypotenuse;
    printf("Length (metres):");
    scanf("%f",&length);
    printf("Height (metres):");
    scanf("%f",&height);
    area = 0.5 * length * height;
    hypotenuse = sqrt(length*length + height*height);
    perimeter = length + height + hypotenuse;
    printf("The area of this triangle is %.1fm^2 \nThe perimeter of this triangle is %.1fm",area,perimeter);

    return 0;
}
