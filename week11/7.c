#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Ham nhap thong tin nhan vien
void Nhaplieu(int nambatdau[], float luong[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap nam bat dau lam viec cua nhan vien thu %d:\n", i + 1);
        scanf("%d", &nambatdau[i]);
        printf("Nhap luong hien tai cua nhan vien thu %d:\n", i + 1);
        scanf("%f", &luong[i]);
    }
}

//In ra thong tin cua nhan vien

void InThongTin(int nambatdau[], float luong[], int n){
    for(int i = 0; i < n; i++){
        printf("Nam bat dau lam viec cua nhan vien thu %d: %d\n", i + 1, nambatdau[i]);
        printf("Luong hien tai cua nhan vien thu %d: %.2f\n", i + 1, luong[i]);
    }
}
//Ham tang luong nhan vien
void TangLuong(float *luong, int *nambatdau, int namhientai, int n){
    int soNamLamViec = namhientai - *nambatdau;
    int soLanTangLuong = soNamLamViec / 3;
    for (int i = 0; i < soLanTangLuong; i++) {
        *luong *= 1.01; // Tăng 1% mỗi lần
    }
    // printf("Luong hien tai cua nhan vien la: %.2f\n", *luong);
}
int main(){
    int n;
    printf("Nhap vao so luong nhan vien: ");
    scanf("%d", &n);
    int nam_bat_dau[n], namhientai = 2024;
    float luong[n];
 
    Nhaplieu(nam_bat_dau, luong, n);
     
    for (int i = 0; i < n; i++) {
        TangLuong(&luong[i], &nam_bat_dau[i], namhientai, n);
    }

    InThongTin(nam_bat_dau, luong, n);
}