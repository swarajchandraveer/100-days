/* Day 55 / Question 55
   Print all prime numbers from 1 through n. Input: n.
*/
#include <stdio.h>

int main(void) {
    int n, value, divisor, prime, first = 1;
    if (scanf("%d", &n) != 1) return 0;
    for (value = 2; value <= n; ++value) {
        prime = 1;
        for (divisor = 2; divisor <= value / divisor; ++divisor) {
            if (value % divisor == 0) { prime = 0; break; }
        }
        if (prime) {
            if (!first) putchar(' ');
            printf("%d", value);
            first = 0;
        }
    }
    putchar('\n');
    return 0;
}
