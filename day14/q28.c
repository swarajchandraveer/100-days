/*
Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main() {
    int n, i;
    long long prod = 1;
    scanf("%d", &n);
    if (n < 2) {
        printf("1 (no even numbers)\n");
        return 0;
    }
    for (i = 2; i <= n; i += 2)
        prod *= i;
    printf("%lld (", prod);
    for (i = 2; i <= n; i += 2) {
        if (i > 2) printf(" * ");
        printf("%d", i);
    }
    printf(")\n");
    return 0;
}
