#include<stdio.h>

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = n-1; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    // Vòng lặp in tam giác cân
    for (int i = 1; i <= n; i++) {
        // In khoảng trắng
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // In dấu '*'
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Xuống dòng
        printf("\n");
    }
    return 0;
}