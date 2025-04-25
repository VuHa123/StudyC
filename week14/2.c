#include <stdio.h>
#include <string.h>

typedef struct Class {
    char ten[21];
    int mhs;
    float diem;
} Class;

// Hàm nhập thông tin học sinh
void nhap(Class *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhập tên học sinh: ");
        scanf(" %[^\n]", a[i].ten);
        printf("Nhập mã học sinh: ");
        scanf("%d", &a[i].mhs);
        printf("Nhập điểm học sinh: ");
        scanf("%f", &a[i].diem);
    }
}

// Hàm in thông tin danh sách học sinh
void In(Class *lop, int n) {
    printf("+------+-------+----------------------+-------+\n");
    printf("| %4s | %5s | %20s | %5s |\n", "STT", "MaHS", "Ho va ten", "Diem");
    printf("+------+-------+----------------------+-------+\n");
    for (int i = 0; i < n; i++) {
        printf("| %4d | %5d | %20s | %5.2f |\n", i + 1, lop[i].mhs, lop[i].ten, lop[i].diem);
        printf("+------+-------+----------------------+-------+\n");
    }
}

// Hàm sắp xếp theo điểm giảm dần
void SapxepTheodiem(Class *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].diem < a[j].diem) {
                Class temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Hàm tách tên
void tachten(char fullname[21], char ten[21]) {
    int length = strlen(fullname);
    int i;
    for (i = length - 1; i >= 0; i--) {
        if (fullname[i] == ' ') {
            strcpy(ten, &fullname[i + 1]);
            fullname[i] = '\0';
            break;
        }
    }
}

// Hàm sắp xếp theo tên ABC
void SapxepTheoten(Class *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            char ten1[21], ten2[21];
            strcpy(ten1, a[i].ten);
            strcpy(ten2, a[j].ten);
            tachten(ten1, ten1);
            tachten(ten2, ten2);
            if (strcmp(ten1, ten2) > 0) {
                Class temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    Class ds[10];
    do {
        printf("Nhập số lượng học sinh (tối đa 10): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 10);

    nhap(ds, n);
    In(ds, n);
    SapxepTheodiem(ds, n);
    printf("\nDanh sách học sinh theo điểm giảm dần:\n");
    In(ds, n);

    SapxepTheoten(ds, n);
    printf("\nDanh sách học sinh theo tên ABC:\n");
    In(ds, n);

    return 0;
}
