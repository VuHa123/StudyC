#include<stdio.h>

int main(){
    float a, b, c, delta;
    printf("Nhap vao so a: ");
    scanf("%f", &a);
    printf("Nhap vao so b: ");
    scanf("%f", &b);
    printf("Nhap vao so c: ");
    scanf("%f", &c);
    delta = b * b - 4 * a *c;
    printf("delta = %.2f\n", delta);
    return 0;
}