/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() {
    int n, temp, sum = 0, i;
    int fact[10];
    fact[0] = 1;
    for (i = 1; i < 10; i++)
        fact[i] = fact[i - 1] * i;
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        sum += fact[temp % 10];
        temp /= 10;
    }
    if (sum == n)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
    return 0;
}
