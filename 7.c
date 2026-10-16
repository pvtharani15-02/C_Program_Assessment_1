Logic:
Simple Interest:
Total Amount = Principal + Interest
Discount = 2% of Interest
Final Settlement = Total Amount − Discount
C Program
#include <stdio.h>

int main() {
    float p, r, t;
    float interest, amount, discount, final;

    scanf("%f%f%f", &p, &r, &t);

    interest = (p * r * t) / 100;

    amount = p + interest;

    discount = interest * 0.02;

    final = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", final);

    return 0;
}
Input:
100
1
10
Output:
10.00
110.00
0.20
109.80
