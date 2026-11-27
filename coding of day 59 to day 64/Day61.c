/* Day 61 / Question 61
   Linear search. Input: n, n array integers, then target.
   Print the zero-based index of the first match, or -1.
*/
#include <stdio.h>

int main(void) {
    int n, a[1000], target, i, index = -1;
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) return 0;
    for (i = 0; i < n; ++i) scanf("%d", &a[i]);
    if (scanf("%d", &target) != 1) return 0;
    for (i = 0; i < n; ++i) if (a[i] == target) { index = i; break; }
    if (index >= 0) printf("Found at index %d\n", index);
    else puts("-1");
    return 0;
}
