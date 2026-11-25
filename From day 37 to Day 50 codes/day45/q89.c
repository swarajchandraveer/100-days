/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

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
    char s[1000], line[100];
    int i, count = 0;
    fgets(s, sizeof s, stdin);
    trim(s);
    fgets(line, sizeof line, stdin);
    char target = line[0];
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == target)
            count++;
    printf("%d\n", count);
    return 0;
}
