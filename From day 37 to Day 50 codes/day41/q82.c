/*
Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

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
    int i;
    fgets(s, sizeof s, stdin);
    trim(s);
    for (i = 0; s[i] != '\0'; i++)
        printf("%c\n", s[i]);
    return 0;
}
