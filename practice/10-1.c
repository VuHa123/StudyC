#include<stdio.h>

void Nhap(int a[12]){
    for(int i = 1; i < 13; i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[12]){
    for(int i = 1; i <= 12; i++){
        printf("%10d|%20d\n", i, a[i]);
    }
}
int main(){
    int a[12];
    Nhap(a);
    printf("%10s|%20s", "Thang", "Luong mua(in mm)\n");
    Xuat(a);
    return 0;
}