/*
Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int n, i, pos, a[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &pos);   /* pos is a 0-based index */
    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return 0;
    }
    for (i = pos; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    for (i = 0; i < n; i++)
        printf("%d%s", a[i], i < n - 1 ? " " : "\n");
    return 0;
}
