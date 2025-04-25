#include<stdio.h>
#include<math.h>
#include<string.h>

void Nhap(int n, int a[]){
    printf("Nhap cac phan tu cua day: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(int n, int a[]){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

int TongCucdai(int n, int a[]){
    int tong = 0;
    for(int i = 0; i < n; i++){
        if((a[i] > a[i-1]) && (a[i] > a[i+1])) tong += a[i];
    }
    return tong;
}
int main(){
    int n;
    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);
    int a[n];
    Nhap(n, a);
    int tong = TongCucdai(n, a);
    printf("Tong  cua cac cuc dai dia phuong cua day so la: %d\n", tong);
    return 0;
}