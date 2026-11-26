/* Day 51 / Question 51
   Print the supplied right-aligned number pattern.
*/
#include <stdio.h>

int main(void) {
    int row, col;
    for (row = 1; row <= 5; ++row) {
        for (col = 6 - row; col <= 5; ++col) printf("%d", col);
        putchar('\n');
    }
    return 0;
}
