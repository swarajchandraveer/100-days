/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

/* Groups of 1, 3, 5, 3, 1 stars (one star per line),
   each group separated by a blank line. */
int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int g, k;
    for (g = 0; g < 5; g++) {
        printf("\n");
        for (k = 0; k < groups[g]; k++)
            printf("*\n");
    }
    printf("\n");
    return 0;
}
