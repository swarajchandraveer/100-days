/*
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main() {
    long long a, b, x, y;
    scanf("%lld %lld", &a, &b);
    x = a;
    y = b;
    while (y != 0) {
        long long t = y;
        y = x % y;
        x = t;
    }
    printf("%lld\n", a / x * b);
    return 0;
}
