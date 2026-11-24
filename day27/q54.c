/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main() {
    int i, j, width;
    for (i = 1; i <= 7; i++) {
        width = (i <= 4) ? 2 * i - 1 : 2 * (8 - i) - 1;
        for (j = 0; j < (7 - width) / 2; j++)
            printf(" ");
        for (j = 0; j < width; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
