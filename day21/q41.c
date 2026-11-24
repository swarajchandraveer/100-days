/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    long long n, first, last, p = 1, temp;
    scanf("%lld", &n);
    if (n < 10) {
        printf("%lld\n", n);
        return 0;
    }
    last = n % 10;
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        p *= 10;
    }
    first = temp;
    long long middle = (n % p) / 10;
    printf("%lld\n", last * p + middle * 10 + first);
    return 0;
}
