/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

/* remove the trailing newline left by fgets */
void trim(char *s) {
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n' && s[i] != '\r')
        i++;
    s[i] = '\0';
}

int main() {
    char a[1000], b[1000], doubled[2000];
    fgets(a, sizeof a, stdin);
    fgets(b, sizeof b, stdin);
    trim(a);
    trim(b);
    if (strlen(a) != strlen(b)) {
        printf("Not rotation\n");
        return 0;
    }
    strcpy(doubled, a);
    strcat(doubled, a);          /* a + a contains every rotation of a */
    if (strstr(doubled, b) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}
