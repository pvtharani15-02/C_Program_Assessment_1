Logic:
Submission is allowed when:
At least one question is answered.
Remaining time is greater than 0.
Exam is not already submitted.
C Program
#include <stdio.h>

int main() {
    int questions, time, submitted;

    scanf("%d", &questions);
    scanf("%d", &time);
    scanf("%d", &submitted);

    if (questions > 0 && time > 0 && submitted == 0) {
        printf("Submission Allowed");
    } else {
        printf("Submission Not Allowed");
    }

    return 0;
}
Input:
45
12
0
Output:
Submission Allowed
