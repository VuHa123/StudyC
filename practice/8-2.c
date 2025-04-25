#include<stdio.h>

int main(){
    int n, sum = 0;
    do{
        printf("Nhap vao n: ");
        scanf("%d", &n);
        if(n <= 10 || n >= 100) printf("Nhap sai. Vui long nhap lai!\n");
    }while(n <= 10 || n >= 100);
    int i = 1;
    while(i<=n){
        sum += i;
        i++;
    }
    printf("Tong cua %d dau tien la: %d\n", n, sum);
    return 0;
}