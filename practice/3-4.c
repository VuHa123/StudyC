#include<stdio.h>
#define PI 3.14
int main(){
    int r;
    printf("Nhap vao ban kinh hinh cau: ");
    scanf("%d", &r);
    printf("Dien tich cua hinh cau la: %.2f\n", 4 * PI * r * r);
    printf("The tich cua hinh cau: %.2f\n", (4/3) * PI * r * r *r);
    return 0;
}