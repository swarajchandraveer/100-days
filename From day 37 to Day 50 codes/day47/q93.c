/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

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
    char a[1000], b[1000];
    int i, count[26] = {0}, anagram = 1;
    fgets(a, sizeof a, stdin);
    fgets(b, sizeof b, stdin);
    trim(a);
    trim(b);
    for (i = 0; a[i] != '\0'; i++) {
        char ch = a[i];
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        if (ch >= 'a' && ch <= 'z') count[ch - 'a']++;
    }
    for (i = 0; b[i] != '\0'; i++) {
        char ch = b[i];
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        if (ch >= 'a' && ch <= 'z') count[ch - 'a']--;
    }
    for (i = 0; i < 26; i++)
        if (count[i] != 0)
            anagram = 0;
    printf(anagram ? "Anagrams\n" : "Not anagrams\n");
    return 0;
}
