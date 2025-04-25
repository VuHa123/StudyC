#include<stdio.h>

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);    
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
    return 0;
}