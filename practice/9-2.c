#include<stdio.h>
int Nhap(int n){
    while((n <= 10 || n >= 100)){
        printf("Nhap sai. Vui long nhap lai!\n");
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }
    return n;
}
int sum(int n){
    int i = 1, sum = 0;
    while(i<=n){
        sum += i;
        i++;
    }
    return sum;
}
int main(){
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    n = Nhap(n);
    printf("Tong cua %d dau tien la: %d\n", n, sum(n));
    return 0;
}