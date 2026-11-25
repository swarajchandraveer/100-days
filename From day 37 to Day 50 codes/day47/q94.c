/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

/* remove the trailing newline left by fgets */
void trim(char *s) {
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n' && s[i] != '\r')
        i++;
    s[i] = '\0';
}

int main() {
    char s[1000];
    int i = 0, start, len, bestStart = 0, bestLen = 0;
    fgets(s, sizeof s, stdin);
    trim(s);
    while (s[i] != '\0') {
        while (s[i] == ' ')
            i++;
        start = i;
        while (s[i] != '\0' && s[i] != ' ')
            i++;
        len = i - start;
        if (len > bestLen) {
            bestLen = len;
            bestStart = start;
        }
    }
    for (i = 0; i < bestLen; i++)
        printf("%c", s[bestStart + i]);
    printf("\n");
    return 0;
}
