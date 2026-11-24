/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

/* Series: 1 + 3/4 + 5/6 + 7/8 + ...
   Term 1 is 1; term i (i >= 2) is (2i-1)/(2i). */
int main() {
    int n, i;
    double sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i == 1)
            sum += 1;
        else
            sum += (2.0 * i - 1) / (2.0 * i);
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
