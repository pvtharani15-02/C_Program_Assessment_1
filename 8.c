Logic:
Less than 3 years → Junior
3–7 years and performance ≥ 80 → Mid-Level
More than 7 years and performance ≥ 85 → Senior
For employees with over 7 years and lower performance, this program assigns Mid-Level.
C Program
#include <stdio.h>

int main() {
    int experience, performance;

    scanf("%d", &experience);
    scanf("%d", &performance);

    if (experience > 7 && performance >= 85) {
        printf("Level: Senior");
    }
    else if (experience > 7) {
        printf("Level: Mid-Level");
    }
    else if (experience >= 3 && performance >= 80) {
        printf("Level: Mid-Level");
    }
    else {
        printf("Level: Junior");
    }

    return 0;
}
Input:
9
88
Output:
Level: Senior
