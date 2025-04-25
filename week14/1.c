#include <stdio.h>

typedef struct {
    int ngay;
    int thang;
    int nam;
} NgayThangNam;

// Chương trình con cho phép nhập dữ liệu một ngày
void nhap_ngay(NgayThangNam *ngay) {
    printf("Nhập ngày (dd mm yyyy): ");
    scanf("%d %d %d", &ngay->ngay, &ngay->thang, &ngay->nam);
}

// Chương trình con so sánh 2 ngày
int so_sanh_ngay(NgayThangNam ngay1, NgayThangNam ngay2) {
    if (ngay1.nam < ngay2.nam) return -1;
    if (ngay1.nam > ngay2.nam) return 1;
    if (ngay1.thang < ngay2.thang) return -1;
    if (ngay1.thang > ngay2.thang) return 1;
    if (ngay1.ngay < ngay2.ngay) return -1;
    if (ngay1.ngay > ngay2.ngay) return 1;
    return 0;
}

// Chương trình kiểm nghiệm
int main() {
    NgayThangNam ngay1, ngay2;
    
    printf("Nhập ngày thứ nhất:\n");
    nhap_ngay(&ngay1);
    
    printf("Nhập ngày thứ hai:\n");
    nhap_ngay(&ngay2);
    
    int ket_qua = so_sanh_ngay(ngay1, ngay2);
    
    if (ket_qua == -1) {
        printf("Ngày thứ nhất trước ngày thứ hai.\n");
    } else if (ket_qua == 0) {
        printf("Ngày thứ nhất trùng với ngày thứ hai.\n");
    } else {
        printf("Ngày thứ nhất sau ngày thứ hai.\n");
    }
    
    return 0;
}
