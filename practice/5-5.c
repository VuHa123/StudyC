#include<stdio.h>

int main(){
    float a, b, c, delta;
    printf("Nhap vao he so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b*b - 4*a*c;
    printf("Gia tri cua delta la: %.2f\n", delta);
    return 0;
}