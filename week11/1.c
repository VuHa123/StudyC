#include<stdio.h>

int main(){
    //Viết chương trình nhập vào 3 số nguyên. Khai báo một con trỏ và trỏ đến lần lượt các số nguyên đó. Hiển thị giá trị của con trỏ trong mỗi lẫn chỏ đến một số.
    int a, b, c;
    int *p;
    printf("Nhap so nguyen thu 1: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu 2: ");
    scanf("%d", &b);
    printf("Nhap so nguyen thu 3: ");
    scanf("%d", &c);

    p = &a;
    printf("Gia tri cua con tro khi tro den a la: %d\n", *p);
    p = &b;
    printf("Gia tri cua con tro khi tro den b la: %d\n", *p);
    p = &c;
    printf("Gia tri cua con tro khi tro den c la: %d\n", *p);\
    return 0;
}