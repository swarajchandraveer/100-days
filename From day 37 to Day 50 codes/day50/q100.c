/*
Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

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
    int len = 0, i, j, k, first = 1;
    fgets(s, sizeof s, stdin);
    trim(s);
    while (s[len] != '\0')
        len++;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (!first) printf(",");
            for (k = i; k <= j; k++)
                printf("%c", s[k]);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
