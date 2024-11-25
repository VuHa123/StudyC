#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    float x, y, z, F;
    printf("Nhap vao gia tri cua x: ");
    scanf("%f", &x);
    printf("Nhap vao gia tri cua y: ");
    scanf("%f", &y);
    printf("Nhap vao gia tri cua z: ");
    scanf("%f", &z);
    F = ((x + y + sqrt(z))/(pow(x, 2) + pow(y, 2) + 1)) - abs(sin(x) - z * cos(y));
    printf("Gia tri cua bieu thu F = %.2f\n", F);
    return 0;
}