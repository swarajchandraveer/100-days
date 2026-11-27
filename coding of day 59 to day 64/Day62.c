/* Day 62 / Question 62
   Reverse an array in place. Input: n, then n integers.
*/
#include <stdio.h>

int main(void) {
    int n, a[1000], i, temp;
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) return 0;
    for (i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (i = 0; i < n / 2; ++i) {
        temp = a[i]; a[i] = a[n - 1 - i]; a[n - 1 - i] = temp;
    }
    for (i = 0; i < n; ++i) printf("%s%d", i ? " " : "", a[i]);
    putchar('\n');
    return 0;
}
