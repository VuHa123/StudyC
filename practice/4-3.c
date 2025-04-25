#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    int r;
    printf("Nhap vao ban kinh cua vong tron: ");
    scanf("%d", &r);
    printf("Chu vi cua vong tron la: %.2f\n", 2*PI*r);
    printf("Dien tich hinh tron: %.2f\n", PI * pow(r, 2));
    return 0;
}