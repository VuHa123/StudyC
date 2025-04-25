#include<stdio.h>

int main(){

    float epsilon, e = 0, giaithua = 1;
    printf("Nhap so epsilon: ");
    scanf("%f", &epsilon);
    int i = 0;
    do{
        e += 1/giaithua;
        i++;
        giaithua *= i;
    }while((1/giaithua) > epsilon);
    printf("Ket qua: %.2f", e);
    return 0;
}