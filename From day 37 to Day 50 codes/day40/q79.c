/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

/* Zig-zag diagonal traversal:
   odd diagonals go top -> bottom, even diagonals go bottom -> top. */
int main() {
    int r, c, i, j, d, m[50][50], first = 1;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    for (d = 0; d <= r + c - 2; d++) {
        int lo = d - (c - 1) > 0 ? d - (c - 1) : 0;
        int hi = d < r - 1 ? d : r - 1;
        if (d % 2 == 1) {
            for (i = lo; i <= hi; i++) {
                if (!first) printf(" ");
                printf("%d", m[i][d - i]);
                first = 0;
            }
        } else {
            for (i = hi; i >= lo; i--) {
                if (!first) printf(" ");
                printf("%d", m[i][d - i]);
                first = 0;
            }
        }
    }
    printf("\n");
    return 0;
}
