#include<stdio.h>

int main(){
    int n, giai_thua = 1;
    do{
        printf("Nhap vao n: ");
        scanf("%d", &n);
        if(n < 0 || n >= 8) printf("Nhap sai. Vui long nhap lai!\n");
    }while(n >= 8);
    int i = 1;
    while(i<=n){
        giai_thua *= i;
        i++;
    }
    printf("Giai thua cua %d la: %d\n", n, giai_thua);
    return 0;
}