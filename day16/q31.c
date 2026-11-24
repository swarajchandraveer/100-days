/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int n, i = 0, bits[32];
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    while (n > 0) {
        bits[i++] = n % 2;
        n /= 2;
    }
    while (i > 0)
        printf("%d", bits[--i]);
    printf("\n");
    return 0;
}
