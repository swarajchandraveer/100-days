/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

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
    int len = 0, i;
    fgets(s, sizeof s, stdin);
    trim(s);
    while (s[len] != '\0')
        len++;
    for (i = len - 1; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}
