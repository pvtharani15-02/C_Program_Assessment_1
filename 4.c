Logic:
100 cents = 1 dollar.
Add dollars and cents separately.
Convert extra cents into dollars.
C Program
#include <stdio.h>

int main() {
    int d1, c1, d2, c2;
    int dollar, cent;

    scanf("%d%d%d%d", &d1, &c1, &d2, &c2);

    dollar = d1 + d2;
    cent = c1 + c2;

    dollar = dollar + cent / 100;
    cent = cent % 100;

    printf("%d\n", dollar);
    printf("%d\n", cent);

    return 0;
}
Input:
30
10
140
99
Output:
171
9
