#include<stdio.h>

void GiaiThua(int n){
    int giai_thua = 1, i = 1;
    while(n >= 8){
        printf("Nhap vao n: ");
        scanf("%d", &n);
        if(n < 0 || n >= 8) printf("Nhap sai. Vui long nhap lai!\n");
    }
    while(i<=n){
        giai_thua *= i;
        i++;
    }
    printf("Giai thua cua %d la: %d\n", n, giai_thua);
}
int main(){
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    GiaiThua(n);
    return 0;
}