/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main() {
    int i, j, width;
    for (i = 1; i <= 9; i++) {
        width = (i <= 5) ? 2 * i - 1 : 2 * (10 - i) - 1;
        for (j = 0; j < width; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
