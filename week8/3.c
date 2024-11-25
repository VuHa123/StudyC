#include<stdio.h>

int main(){
    float epsilon, e = 1, n = 1, giaithua = 1;
    printf("Nhap vao so epsilon: ");
    scanf("%f", &epsilon);
    do{
        giaithua *= n;
        e = e + 1/(giaithua);
        n++;
    }
    while(1/giaithua >= epsilon);
        intf("Ket qua: %.2f\n", e);
    return 0;
    }