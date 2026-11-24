/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    long long n, prod = 1;
    int found = 0;
    long long digits[20];
    int count = 0, i;
    scanf("%lld", &n);
    if (n < 0) n = -n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 1) {
            digits[count++] = d;
            prod *= d;
            found = 1;
        }
        n /= 10;
    }
    if (!found) {
        printf("1 (no odd digits, assume 1)\n");
        return 0;
    }
    printf("%lld (", prod);
    for (i = count - 1; i >= 0; i--) {
        printf("%lld", digits[i]);
        if (i > 0) printf("*");
    }
    printf(")\n");
    return 0;
}
