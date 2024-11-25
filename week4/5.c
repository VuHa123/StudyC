#include<stdio.h>
#include<string.h>

int main(){
    char ten[15], msv[10], ngaysinh[20], nghanhhoc[20], khoa[20], khoahoc[20];
    printf("Nhap ten sinh vien: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strcspn(ten, "\n")] = '\0';
    printf("Nhap vao ma sinh vien: ");
    fgets(msv, sizeof(msv), stdin);
    msv[strcspn(msv, "\n")] = '\0';
    printf("Nhap vao ngay sinh: ");
    fgets(ngaysinh, sizeof(ngaysinh), stdin);
    printf("Nhap vao nganh hoc: ");
    fgets(nghanhhoc, sizeof(nghanhhoc), stdin);
    printf("Nhap vao khoa hoc: ");
    fgets(khoa, sizeof(khoa), stdin);
    printf("Nhap vao Khoa hoc: ");
    fgets(khoahoc, sizeof(khoahoc), stdin);
    //Xuat du lieu
    printf("\nThong tin sinh vien:\n");
    printf("Ten sinh vien: %s\n", ten);
    printf("Ma sinh vien: %s\n", msv);
    printf("Ngay sinh: %s\n", ngaysinh);
    printf("Nganh hoc: %s\n", nghanhhoc);
    printf("Khoa hoc: %s\n", khoa);
    printf("Khoa hoc: %s\n", khoahoc);
    return 0;
}