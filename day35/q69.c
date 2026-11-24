/*
Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, x;
    long long first = LLONG_MIN, second = LLONG_MIN;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > first) {
            second = first;
            first = x;
        } else if (x < first && x > second) {
            second = x;
        }
    }
    if (second == LLONG_MIN)
        printf("No second largest element\n");
    else
        printf("%lld\n", second);
    return 0;
}
