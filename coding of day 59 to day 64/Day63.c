/* Day 63 / Question 63
   Merge two arrays by appending the second to the first.
   Input: n, n values, m, then m values.
*/
#include <stdio.h>

int main(void) {
    int n, m, a[2000], i;
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) return 0;
    for (i = 0; i < n; ++i) scanf("%d", &a[i]);
    if (scanf("%d", &m) != 1 || m < 0 || n + m > 2000) return 0;
    for (i = 0; i < m; ++i) scanf("%d", &a[n + i]);
    for (i = 0; i < n + m; ++i) printf("%s%d", i ? " " : "", a[i]);
    putchar('\n');
    return 0;
}
