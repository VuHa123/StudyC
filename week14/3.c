#include <stdio.h>
#include <string.h>

typedef struct Hanghoa {
    char ten[21];
    char ma[7];
    float gia;
    int soluong;
} Hanghoa;

void Nhap(Hanghoa ds[], int *n) {
    int i = 0;
    while (1) {
        printf("Nhap thong tin hang hoa\n");
        printf("Nhap ten hang: ");
        fgets(ds[i].ten, sizeof(ds[i].ten), stdin);
        ds[i].ten[strlen(ds[i].ten) - 1] = '\0';
        if (strcmp(ds[i].ten, "***") == 0) break;
        printf("Nhap ma hang: ");
        fgets(ds[i].ma, sizeof(ds[i].ma), stdin);
        ds[i].ma[strlen(ds[i].ma) - 1] = '\0';
        printf("Nhap gia hang: ");
        scanf("%f", &ds[i].gia);
        printf("Nhap so luong hang: ");
        scanf("%d", &ds[i].soluong);
        getchar(); 
        i++;
    }
    *n = i;
}

void SapXep(Hanghoa ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ds[i].ma, ds[j].ma) > 0) {
                Hanghoa temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void InDanhSach(Hanghoa ds[], int n) {
    printf("Danh sach cac mat hang co tong gia tri ban > 500000 dong:\n");
    for (int i = 0; i < n; i++) {
        float tongGiaTri = ds[i].gia * ds[i].soluong;
        if (tongGiaTri > 500000) {
            printf("Ma hang: %s, Ten hang: %s, Don gia: %.2f, So luong: %d, Tong gia tri: %.2f\n",
                   ds[i].ma, ds[i].ten, ds[i].gia, ds[i].soluong, tongGiaTri);
        }
        printf("\n");
    }
}

int main() {
    Hanghoa ds[100];
    int n;
    Nhap(ds, &n);
    SapXep(ds, n);
    InDanhSach(ds, n);
    return 0;
}
