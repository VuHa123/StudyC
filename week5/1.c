#include<stdio.h>

int main(){
    float a, b;
    printf("Nhap vao phan thuc: ");
    scanf("%f", &a);
    printf("Nhap vao phan ao: ");
    // fflush(stdin);
    scanf("%f", &b);
    printf("So vua nhap: (%.2f, %.2f)\n", a, b);

}