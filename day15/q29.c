/*
Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long f = 1;
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers\n");
        return 0;
    }
    for (i = 2; i <= n; i++)
        f *= i;
    printf("%llu\n", f);
    return 0;
}
