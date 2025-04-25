#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    float x, y, z, F;
    printf("Nhap cac so x, y, z: ");
    scanf("%f %f %f", &x, &y, &z);
    F = ((x + y + sqrt(z) / (pow(x, 2) + pow(y, 2) + 1)) - fabs(sin(x) - z * cos(y)));
    printf("Ket qua la: %.2f\n", F);
    return 0;
}