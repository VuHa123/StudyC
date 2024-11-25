#include<stdio.h>
#define PI 3.14
int main(){
    int n;
    double s, c;
    printf("Nhap vao ban kinh cua vong tron: ");
    scanf("%d", &n);
    s = PI * n * n;
    c = 2 * PI * n;
    printf("Chu vi cua vong tron la: %f\n", c);
    printf("Dien tich cua vong tron la: %f\n", s);
    return 0;
}