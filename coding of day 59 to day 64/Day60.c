/* Day 60 / Question 60
   Read n and n integers; count positive, negative, and zero values.
*/
#include <stdio.h>

int main(void) {
    int n, i, value, positive = 0, negative = 0, zero = 0;
    if (scanf("%d", &n) != 1 || n < 0) return 0;
    for (i = 0; i < n; ++i) {
        scanf("%d", &value);
        if (value > 0) ++positive;
        else if (value < 0) ++negative;
        else ++zero;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    return 0;
}
