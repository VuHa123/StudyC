#include<stdio.h>

int main(){
    int n;
    float sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        sum += 1.0 / i;
    }
    printf("Tong cua day so la: %.2f\n", sum);
    return 0;
}