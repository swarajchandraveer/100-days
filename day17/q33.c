/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main() {
    long long n, temp, sum = 0;
    int digits = 0, i;
    scanf("%lld", &n);
    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        long long d = temp % 10, p = 1;
        for (i = 0; i < digits; i++)
            p *= d;
        sum += p;
        temp /= 10;
    }
    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
