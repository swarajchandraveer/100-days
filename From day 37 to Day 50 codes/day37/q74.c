/*
Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main() {
    int r, c, i, j, m[50][50];
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    for (j = 0; j < c; j++)
        for (i = 0; i < r; i++)
            printf("%d%s", m[i][j], i < r - 1 ? " " : "\n");
    return 0;
}
