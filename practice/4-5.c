#include<stdio.h>
#include<string.h>

int main(){
    char ten[15], msv[10], ngaysinh[20], nganhhoc[20], khoa[20], khoahoc[25];
    printf("Nhap ten sinh vien: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strcspn(ten, "\n")] = '\0';
    printf("Nhap vao ma sinh vien: ");
    fgets(msv, sizeof(msv), stdin);
    msv[strcspn(msv, "\n")] = '\0';
    printf("Nhap vao ngay sinh: ");
    fgets(ngaysinh, sizeof(ngaysinh), stdin);
    printf("Nhap vao nganh hoc: ");
    fgets(nganhhoc, sizeof(nganhhoc), stdin);
    nganhhoc[strlen(nganhhoc) - 1] = '\0';
    printf("Nhap vao khoa hoc: ");
    fgets(khoa, sizeof(khoa), stdin);
    khoa[strlen(khoa) - 1] = '\0';
    printf("Nhap vao Khoa hoc: ");
    fgets(khoahoc, sizeof(khoahoc), stdin);
    khoahoc[strlen(khoahoc) - 1] = '\0';
    //Xuat du lieu
    printf("\nThong tin sinh vien:\n");
    printf("Ten sinh vien: %s\n", ten);
    printf("Ma sinh vien: %s\n", msv);
    printf("Ngay sinh: %s", ngaysinh);
    printf("Nganh hoc: %s\n", nganhhoc);
    printf("Khoa hoc: %s\n", khoa);
    printf("Khoa hoc: %s\n", khoahoc);
    return 0;
}