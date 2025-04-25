#include<stdio.h>

int main(){
    int day, month, year;
    printf("Nhap vao ngay - thang - nam: ");
    scanf("%d %d %d", &day, &month, &year);
    printf("Hom nay la ngay: %02d/%02d/%d\n", day, month, year);
    return 0;
}