/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main() {
    int r, c, i, j, m[50][50], symmetric = 1;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    if (r != c)
        symmetric = 0;
    for (i = 0; i < r && symmetric; i++)
        for (j = 0; j < c; j++)
            if (m[i][j] != m[j][i]) {
                symmetric = 0;
                break;
            }
    printf(symmetric ? "True\n" : "False\n");
    return 0;
}
