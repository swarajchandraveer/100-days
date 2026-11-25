/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int r, c, i, j, m[50][50], rowSum[50];
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
            rowSum[i] += m[i][j];
        }
    }
    for (i = 0; i < r; i++)
        printf("%d%s", rowSum[i], i < r - 1 ? " " : "\n");
    return 0;
}
