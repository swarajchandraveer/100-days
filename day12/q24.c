/*
Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include <stdio.h>

int main() {
    int u;
    long bill;
    scanf("%d", &u);
    if (u <= 100)
        bill = u * 5L;
    else if (u <= 200)
        bill = 100 * 5L + (u - 100) * 7L;
    else if (u <= 300)
        bill = 100 * 5L + 100 * 7L + (u - 200) * 10L;
    else
        bill = 100 * 5L + 100 * 7L + 100 * 10L + (u - 300) * 12L;
    printf("Bill: ₹%ld\n", bill);
    return 0;
}
