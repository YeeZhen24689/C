/* Filename: Exercise_2.c
   Description: Converts a string of lowercase letter and turns it to uppercase letters.
   Author: Yee Zhen
   Date: 01/03/24
   I/O: A string
   Version: 1
*/

#include <stdio.h>
#include <string.h>

void lowercase_to_uppercase(char string[]);

int main() {
    char string[100]={"$"}; // This is just here to signal when should the for loop break, sets all 100 characters as $.
    printf("Enter string here ->");
    scanf("%s",&string);
    lowercase_to_uppercase(string);
    printf("%s",string);
    return 0;
}

void lowercase_to_uppercase(char string[]) {
    int length = strlen(string), letternum;
    for (int i = 0; i < length; i++) {
        if (string[i] == "$") {
            break;
        }
        letternum = (int)string[i];

        if (letternum > 96) { // Less than 96 means its upper case
            letternum -= 32;
        }

        string[i] = (char)letternum;
    }
    return;
}