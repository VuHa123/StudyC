#include<stdio.h>

int main(){
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if(n % 2 == 0) printf("Ban vua nhap so chan\n");
    else printf("Ban vua nhap so le\n");
    return 0;
}