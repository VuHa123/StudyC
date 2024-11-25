#include<stdio.h>

int main(){
    int n;
    printf("Nhap vao so dong: ");
    scanf("%d", &n);
    //a, Tam giac thu nhat
    for(int i = n - 1; i >= 0; i--){
    //In ra dau *
        for(int j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");

    }
    //b, Tam gia thu 2
    for (int i = 1; i <= n; i++) {
        // In khoảng trắng
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // In dấu sao
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}