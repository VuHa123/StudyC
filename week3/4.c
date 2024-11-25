#include<stdio.h>
#define PI 3.14
int main(){
    double r, S, V;
    printf("Nhap vao ban kink: ");
    scanf("%lf", &r);
    S = 4* PI * r * r;
    printf("S = 4piR^2 = %.2lf\n", S);
    V = (4/3) * PI * r * r * r;
    printf("V = (4/3)piR^3 = %.2lf\n", V);
}