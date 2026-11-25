/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

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
    int i = 0, j, start, end;
    fgets(s, sizeof s, stdin);
    trim(s);
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            printf(" ");
            i++;
        } else {
            start = i;
            while (s[i] != '\0' && s[i] != ' ')
                i++;
            end = i - 1;
            for (j = end; j >= start; j--)
                printf("%c", s[j]);
        }
    }
    printf("\n");
    return 0;
}
