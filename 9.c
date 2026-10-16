Logic:
February → 28 or 29 days
April, June, September, November → 30 days
Other months → 31 days
Invalid year → 0
C Program
#include <stdio.h>

int main() {
    int year, month, days;

    scanf("%d%d", &year, &month);

    if (year < 1900 || year > 9999 ||
        month < 1 || month > 12) {
        printf("0");
        return 0;
    }

    if (month == 2) {
        if (year % 400 == 0 ||
           (year % 4 == 0 && year % 100 != 0)) {
            days = 29;
        } else {
            days = 28;
        }
    }
    else if (month == 4 || month == 6 ||
             month == 9 || month == 11) {
        days = 30;
    }
    else {
        days = 31;
    }

    printf("%d Days", days);

    return 0;
}
Input:
2000
2
Output:
29 Days
