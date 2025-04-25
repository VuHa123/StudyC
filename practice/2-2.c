#include<stdio.h>

int main(){
    double a, c, ac, as, v;
    printf("Nhap vao gia tri cua canh hinh vuong: ");
    scanf("%lf", &a);
    printf("Chu vi hinh vuong la: %.2lf\n", a*4);
    printf("Dien tich hinh vuong: %.2lf\n", a*a);
    printf("Dien tich xung quanh cua khoi lap phuong: %.2lf\n", 6*a*a);
    printf("The tich khoi lap phuong: %.2lf\n", a*a*a);
    return 0;
}