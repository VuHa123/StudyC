#include<stdio.h>

int main(){
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    printf("So vua nhap: %d\n", n);
    printf("Tuong ung: \\%d\%\\\"%d\%\"\\'%d\%\'\\", n, n, n);
    return 0;
}