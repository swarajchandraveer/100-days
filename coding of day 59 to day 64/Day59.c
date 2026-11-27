/* Day 59 / Question 59
   Read n and n integers; count even and odd values.
*/
#include <stdio.h>

int main(void) {
    int n, i, value, even = 0, odd = 0;
    if (scanf("%d", &n) != 1 || n < 0) return 0;
    for (i = 0; i < n; ++i) {
        scanf("%d", &value);
        if (value % 2 == 0) ++even; else ++odd;
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
