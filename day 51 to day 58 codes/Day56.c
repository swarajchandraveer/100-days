/* Day 56 / Question 56
   Read n followed by n integers, then print the array elements.
*/
#include <stdio.h>

int main(void) {
    int n, i, a[1000];
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) return 0;
    for (i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (i = 0; i < n; ++i) printf("%s%d", i ? " " : "", a[i]);
    putchar('\n');
    return 0;
}
