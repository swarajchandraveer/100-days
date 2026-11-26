/* Day 58 / Question 58
   Read n and n integers; print the maximum and minimum values.
*/
#include <stdio.h>

int main(void) {
    int n, i, value, maximum, minimum;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 0;
    scanf("%d", &maximum);
    minimum = maximum;
    for (i = 1; i < n; ++i) {
        scanf("%d", &value);
        if (value > maximum) maximum = value;
        if (value < minimum) minimum = value;
    }
    printf("Max=%d, Min=%d\n", maximum, minimum);
    return 0;
}
