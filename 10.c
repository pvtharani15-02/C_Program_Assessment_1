Logic:
Units
Rate
Extra Charge
0–200
₹0.50/unit
₹0
201–400
₹0.65/unit
₹100
401–600
₹0.80/unit
₹200
Above 600
₹1.25/unit
₹425
The rate applies to all consumed units according to the range specified in the question.
C Program
#include <stdio.h>

int main() {
    int units;
    float bill;

    scanf("%d", &units);

    if (units <= 200) {
        bill = units * 0.50;
    }
    else if (units <= 400) {
        bill = units * 0.65 + 100;
    }
    else if (units <= 600) {
        bill = units * 0.80 + 200;
    }
    else {
        bill = units * 1.25 + 425;
    }

    printf("Rs.%g", bill);

    return 0;
}
Input:
200
Output:
Rs.100
