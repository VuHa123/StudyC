#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[21];
    char ma[9];
    int sophach;
} ThiSinh;

typedef struct {
    int sophach;
    float diem;
} BaiThi;

void NhapThiSinh(ThiSinh ts[], int *n) {
    printf("Nhap so luong thi sinh: ");
    scanf("%d", n);
    getchar(); // Clear the newline character from the buffer
    for (int i = 0; i < *n; i++) {
        printf("Nhap thong tin thi sinh thu %d\n", i + 1);
        printf("Nhap ten: ");
        fgets(ts[i].ten, sizeof(ts[i].ten), stdin);
        ts[i].ten[strlen(ts[i].ten) - 1] = '\0';
        printf("Nhap ma hoc sinh: ");
        fgets(ts[i].ma, sizeof(ts[i].ma), stdin);
        ts[i].ma[strlen(ts[i].ma) - 1] = '\0';
        printf("Nhap so phach: ");
        scanf("%d", &ts[i].sophach);
        getchar(); // Clear the newline character from the buffer
    }
}

void NhapBaiThi(BaiThi bt[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin bai thi thu %d\n", i + 1);
        printf("Nhap so phach: ");
        scanf("%d", &bt[i].sophach);
        printf("Nhap diem: ");
        scanf("%f", &bt[i].diem);
    }
}

void SapXepThiSinh(ThiSinh ts[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ts[i].sophach > ts[j].sophach) {
                ThiSinh temp = ts[i];
                ts[i] = ts[j];
                ts[j] = temp;
            }
        }
    }
}

void SapXepBaiThi(BaiThi bt[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (bt[i].sophach > bt[j].sophach) {
                BaiThi temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }
}

void InKetQua(ThiSinh ts[], BaiThi bt[], int n) {
    printf("+-----+----------+--------------------+------+\n");
    printf("| STT | MaThiSinh| Ho va Ten          | Diem |\n");
    printf("+-----+----------+--------------------+------+\n");
    for (int i = 0; i < n; i++) {
        printf("| %3d | %-8s | %-18s | %4.1f |\n", i + 1, ts[i].ma, ts[i].ten, bt[i].diem);
    }
    printf("+-----+----------+--------------------+------+\n");
}

int main() {
    ThiSinh ts[10];
    BaiThi bt[10];
    int n;

    NhapThiSinh(ts, &n);
    SapXepThiSinh(ts, n);
    NhapBaiThi(bt, n);
    SapXepBaiThi(bt, n);
    InKetQua(ts, bt, n);

    return 0;
}
