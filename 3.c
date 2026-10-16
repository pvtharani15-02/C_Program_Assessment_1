Logic:
Long Ben receives x% of the treasure.
Blackbeard receives y% of the remaining treasure.
Three pirates divide the rest equally.
Leftover coins are discarded.
C Program
#include <stdio.h>

int main() {
    int gold, x, y;
    int ben, blackbeard, pirates;

    scanf("%d", &gold);
    scanf("%d", &x);
    scanf("%d", &y);

    ben = gold * x / 100;

    gold = gold - ben;

    blackbeard = gold * y / 100;

    gold = gold - blackbeard;

    pirates = gold / 3;

    printf("%d\n", ben);
    printf("%d\n", blackbeard);
    printf("%d\n", pirates);

    return 0;
}
Input:
729
65
87
Output:
473
222
11
