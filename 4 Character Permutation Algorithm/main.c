/* Filename: Exercise_2.c
   Description: Program receives an input of 4 letters and proceeds to print out all unique permutations of these letters.
   Author: Yee Zhen
   Date: 23/02/24
   I/O: A string of four characters
   Version: 1
*/

#include <stdio.h>

int main() {
    char input[4], word[4];
    int valueid,unique[25] = {0};

    printf("Enter a 4 letter phrase and I will give you all the possible permutations.");
    scanf("%s",input);

    for (int i = 0; i < 4; i++) {
        word[0] = input[i];
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                word[1] = input[j];
            } else {
                continue;
            }
            for (int k = 0; k < 4; k++) {
                if (k != i && k != j) {
                    word[2] = input[k];
                } else {
                    continue;
                }
                /* Since I know what the other number's indexes are, I can say that all four numbers 0,1,2,3 will add up to
                6 and filter out any nonsensical answers.*/
                word[3] = input[6-(i+j+k)];
                valueid = (0*word[0])+(1*word[1])+(2*word[2])+(3*word[3]); // Create a unique identifier for each iteration
                for (int l = 0; l < 24; l++ ) { // Checks if the code has done the permutation or not
                    if (valueid == unique[l]) {
                        break;
                    } else if (unique[l] == 0) {
                        unique[l]=valueid;
                        printf("%c%c%c%c\n",word[0],word[1],word[2],word[3]);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
