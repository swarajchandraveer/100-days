/* Day 53 / Question 53
   Print a centered diamond made of stars, with five rows at its widest point.
*/
#include <stdio.h>

int main(void) {
    int row, spaces, stars;
    for (row = 1; row <= 5; ++row) {
        for (stars = 0; stars < 2 * row - 1; ++stars) putchar('*');
        putchar('\n');
    }
    for (row = 4; row >= 1; --row) {
        for (stars = 0; stars < 2 * row - 1; ++stars) putchar('*');
        putchar('\n');
    }
    return 0;
}
