/* Day 64 / Question 64
   Print the most frequent decimal digit in an integer. For ties, choose
   the smallest tied digit, matching the samples.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char number[10000];
    int count[10] = {0}, i, digit, best = 0, answer = 0;
    if (scanf("%9999s", number) != 1) return 0;
    for (i = 0; number[i] != '\0'; ++i) {
        if (number[i] >= '0' && number[i] <= '9') ++count[number[i] - '0'];
    }
    for (digit = 0; digit <= 9; ++digit) {
        if (count[digit] > best) { best = count[digit]; answer = digit; }
    }
    printf("%d\n", answer);
    return 0;
}
