#include <stdio.h>
#include <math.h>

int main() {
    double a;
    scanf("%lf", &a);
    // Tính toán và in ra kết quả
    printf("a^2 = %.2lf\n", pow(a, 2));
    printf("a^3 = %.2lf\n", pow(a, 3));
    printf("a^4 = %.2lf\n", pow(a, 4));
    return 0;
}