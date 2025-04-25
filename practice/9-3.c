#include<stdio.h>
void Tinh_s(float epsilon){
    float e = 0, giaithua = 1;
    int i = 0;
    do{
        e += 1/giaithua;
        i++;
        giaithua *= i;
    }while((1/giaithua) > epsilon);
    printf("Ket qua: %.2f\n", e);
}
int main(){

    float epsilon, e = 0, giaithua = 1;
    printf("Nhap so epsilon: ");
    scanf("%f", &epsilon);
    Tinh_s(epsilon);
    return 0;
}