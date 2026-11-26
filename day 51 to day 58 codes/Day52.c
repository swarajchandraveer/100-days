/* Day 52 / Question 52
   Print the star grouping shown in the prompt: 1, 3, 5, 3, 1 stars,
   with a blank line between groups and one star per line.
*/
#include <stdio.h>

int main(void) {
    int groups[] = {1, 3, 5, 3, 1};
    int group, star;
    for (group = 0; group < 5; ++group) {
        for (star = 0; star < groups[group]; ++star) puts("*");
        if (group < 4) putchar('\n');
    }
    return 0;
}
