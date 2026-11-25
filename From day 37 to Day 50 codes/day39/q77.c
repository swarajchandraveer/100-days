/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main() {
    int r, c, i, j, n, m[50][50], distinct = 1;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    n = r < c ? r : c;
    for (i = 0; i < n && distinct; i++)
        for (j = i + 1; j < n; j++)
            if (m[i][i] == m[j][j]) {
                distinct = 0;
                break;
            }
    printf(distinct ? "True\n" : "False\n");
    return 0;
}
