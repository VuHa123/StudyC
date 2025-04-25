#include<stdio.h>

int main(){
    float a, b, c, max;
    printf("Nhap vao 3 so thuc a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("So lon nhat la: %.2f", max);
    return 0;
}