/* Day 57 / Question 57
   Read n and n integers; print their sum.
*/
#include <stdio.h>

int main(void) {
    int n, i, value;
    long long sum = 0;
    if (scanf("%d", &n) != 1 || n < 0) return 0;
    for (i = 0; i < n; ++i) { scanf("%d", &value); sum += value; }
    printf("%lld\n", sum);
    return 0;
}
