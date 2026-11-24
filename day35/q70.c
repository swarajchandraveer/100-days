/*
Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main() {
    int n, k, i, a[1000], r[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    k = ((k % n) + n) % n;
    for (i = 0; i < n; i++)
        r[(i + k) % n] = a[i];
    for (i = 0; i < n; i++)
        printf("%d%s", r[i], i < n - 1 ? " " : "\n");
    return 0;
}
