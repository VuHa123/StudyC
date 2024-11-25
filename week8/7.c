#include <stdio.h>

int main() {
    int a, b, kq, step;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    if (a > b) {
        step = a;
    } else {
        step = b;
    }
    int i = step;
    while(i <= a * b){
        if (i % a == 0 && i % b == 0) {
            kq = i;
            break;
        }
        i += step;
    }
    printf("BCNN (%d, %d) = %d\n", a, b, kq);
    return 0;
}