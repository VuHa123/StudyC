#include<stdio.h>

int main(){
    int a, b, c, max;
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("NHap vao gia tri b: ");
    scanf("%d", &b);
    printf("Nhap vao gia tri c: ");
    scanf("%d", &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // In ra số lớn nhất
    printf("So lon nhat trong ba so la: %.2f\n", max);

    return 0;
}