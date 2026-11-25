/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

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
    int i, len = 0, lastStart;
    fgets(s, sizeof s, stdin);
    trim(s);
    while (s[len] != '\0')
        len++;
    while (len > 0 && s[len - 1] == ' ')   /* ignore trailing spaces */
        len--;
    s[len] = '\0';
    lastStart = len;
    while (lastStart > 0 && s[lastStart - 1] != ' ')
        lastStart--;
    /* initials of every word before the surname */
    for (i = 0; i < lastStart; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z')
                ch = ch - 32;
            printf("%c.", ch);
        }
    }
    if (lastStart > 0)
        printf(" ");
    printf("%s\n", s + lastStart);
    return 0;
}
