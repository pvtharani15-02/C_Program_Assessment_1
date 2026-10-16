Logic:
Maximum distance = Mileage × Petrol
If maximum distance is greater than or equal to the required distance, the car can reach the destination.
C Program
#include <stdio.h>

int main() {
    float mileage;
    int petrol, distance;

    scanf("%f", &mileage);
    scanf("%d", &petrol);
    scanf("%d", &distance);

    if (mileage * petrol >= distance) {
        printf("Can reach");
    } else {
        printf("Cannot reach");
    }

    return 0;
}
Input:
11
6
67
Output:
Cannot reach
