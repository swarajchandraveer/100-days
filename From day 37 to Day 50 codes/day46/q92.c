/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

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
    int i, seen[26] = {0};
    fgets(s, sizeof s, stdin);
    trim(s);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (seen[s[i] - 'a']) {
                printf("%c\n", s[i]);
                return 0;
            }
            seen[s[i] - 'a'] = 1;
        }
    }
    printf("No repeating lowercase alphabet\n");
    return 0;
}
