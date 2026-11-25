/*
Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

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
    int len = 0, i, palindrome = 1;
    fgets(s, sizeof s, stdin);
    trim(s);
    while (s[len] != '\0')
        len++;
    for (i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    printf(palindrome ? "Palindrome\n" : "Not palindrome\n");
    return 0;
}
