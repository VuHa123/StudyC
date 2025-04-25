#include<stdio.h>

int main(){
    int a, b, c, Kq1, Kq2;
    printf("Nhap cac gia tri cua a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    Kq1 = a++ + ++a;
    Kq2 = --a - b-- * ++c;
    printf("Ket qua cua Kq1 la: %d\n", Kq1);
    printf("Ket qua cua Kq2 la: %d\n", Kq2);
    return 0;
}