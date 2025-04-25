#include<stdio.h>

int main(){
    int giaithua, n;
    do{
        printf("Nhap n: ");
        scanf("%d", &n);
        if(n > 8) printf("Nhap sai. Nhap lai!\n");
    }while(n>8);
    giaithua = 1;
    for(int i = 1; i <= n; i++){
        giaithua *= i;
    }
    printf("Giai thua cua %d la: %d\n", n, giaithua);
    return 0;
}