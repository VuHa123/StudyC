#include<stdio.h>

int main(){
    int a, b, c;
    printf("Nhap vao gia tri a: ");
    scanf("%d", &a);
    printf("NHap vao gia tri b: ");
    scanf("%d", &b);
    printf("Nhap vao gia tri c: ");
    scanf("%d", &c);
    int kq1, kq2;
    kq1 = a++ + ++a;
    kq2 = --a -b-- * ++c;
    printf("Ket qua cua kq1 la: %d\n", kq1);
    printf("Ket qua cua kq2 la: %d", kq2);
    return 0;
}