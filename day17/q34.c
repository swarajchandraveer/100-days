/*
Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main() {
    int n, i, prime = 1;
    scanf("%d", &n);
    if (n < 2)
        prime = 0;
    for (i = 2; i * i <= n && prime; i++)
        if (n % i == 0)
            prime = 0;
    printf(prime ? "Prime\n" : "Not prime\n");
    return 0;
}
