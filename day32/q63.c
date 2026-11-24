/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n, m, i, a[500], b[500], c[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n; i++)
        c[i] = a[i];
    for (i = 0; i < m; i++)
        c[n + i] = b[i];
    for (i = 0; i < n + m; i++)
        printf("%d%s", c[i], i < n + m - 1 ? " " : "\n");
    return 0;
}
