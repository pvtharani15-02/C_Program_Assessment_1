Logic:
Base fare = ₹100
Above 10 km → ₹20 per extra km
Membership → 10% discount
C Program
#include <stdio.h>
#include <string.h>

int main() {
    int distance;
    float fare = 100;
    char member[10];

    scanf("%d", &distance);
    scanf("%9s", member);

    if (distance > 10) {
        fare = fare + (distance - 10) * 20;
    }

    if (strcmp(member, "true") == 0) {
        fare = fare - (fare * 0.10);
    }

    printf("Final Fare: %.0f", fare);

    return 0;
}
Input:
15
true
Output:
Final Fare: 180
