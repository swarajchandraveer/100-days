/*
Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main() {
    int n, i, pos, val, a[1001];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d %d", &pos, &val);   /* pos is a 0-based index */
    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }
    for (i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = val;
    n++;
    for (i = 0; i < n; i++)
        printf("%d%s", a[i], i < n - 1 ? " " : "\n");
    return 0;
}
