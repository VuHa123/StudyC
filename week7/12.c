#include <stdio.h>
#include<math.h>
int main() {
    double epsilon, pi = 0;
    int i = 0;

    printf("Nhap gia tri epsilon (0 < epsilon < 1): ");
    scanf("%lf", &epsilon);

    while (1.0 / (2 * i + 1) >= epsilon) {
        pi = pow(-1, i) / (2 * i + 1);
        i++;
    }

    pi *= 4; // Nhân với 4 để tính pi
    printf("Gia tri gan dung cua pi la: %.15lf\n", pi);

    return 0;
}