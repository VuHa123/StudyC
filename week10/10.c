#include<stdio.h>
#define ROWS 5
#define COLS 3

void Tat_theo_hang(int n, int m, int a[n][m], int row_i){
    for(int i = 0; i < m; i++){
        a[row_i][i] = !a[row_i][i]; //lay gia tri doi nghich cua den hien tai
    }
}

void Tat_theo_cot(int n, int m, int a[n][m], int col_i){
    for(int i = 0; i < n; i++){
        a[i][col_i] = !a[i][col_i];
    }
}

void Tat_tuy_chon(int n, int m, int a[n][m], int x, int y){
    a[x][y] = !a[x][y];
}

void Hienthi(int n, int m, int a[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
        }
    printf("\n");
}

float CongSuat(int n, int m, int a[n][m]){
    int totalPower = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                if((i+1) % 2 == 0 && (j+1) % 2 == 0){
                    totalPower += 10;
                }else if((i+1) % 2 ==1 && (j+1) % 2 == 1){
                    totalPower += 20;
                }else{
                    totalPower += 15;
                }
            }
        }
    }
    return totalPower;
}

int main(){
    int choice, row, col, x, y;
    int a[ROWS][COLS] = {0};
    while(1){
//Menu
        printf("Quan ly dan den phong hoc.\n");
        printf("Chon 1: Tat den theo hang.\n");
        printf("Chon 2: Tat den theo cot.\n");
        printf("Chon 3: Tat den theo vi tri tuy chon.\n");
        printf("\tChon vi tri muon tat.\n");
        printf("Chon 4: Cong suat tieu thu cua dan den theo trang thai hien thoi.\n");
        printf("Lua chon cua ban.\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so hang (0-%d): ", ROWS - 1);
                scanf("%d", &row);
                if (row >= 0 && row < ROWS) {
                Tat_theo_hang(ROWS, COLS, a, row);
                Hienthi(ROWS, COLS, a);
                } else {
                printf("Hang khong hop le!\n");
                }
                break;
            case 2:
                printf("Nhap so cot (0-%d): ", COLS - 1);
                scanf("%d", &col);
                if (col >= 0 && col < ROWS) {
                Tat_theo_cot(ROWS, COLS, a, col);
                Hienthi(ROWS, COLS, a);
                } else {
                printf("Cot khong hop le!\n");
                }
                break;
            case 3:
                printf("Nhap vi tri hang (0-%d): ", ROWS - 1);
                scanf("%d", &x);
                printf("Nhap vi tri cot (0-%d): ", COLS - 1);
                scanf("%d", &y);
                if (x >= 0 && x < ROWS && y >= 0 && y < COLS) {
                Tat_tuy_chon(ROWS, COLS, a, x, y);
                Hienthi(ROWS, COLS, a);
                } else {
                printf("Vi tri khong hop le!\n");
                }
                break;
            case 4:
                Hienthi(ROWS, COLS, a);
                printf("Cong suat tieu thu la: %.2f W\n", CongSuat(ROWS, COLS, a));
                break;
            default:
                printf("Thoat chuong trinh.\n");
                return 0;
        }
    }
    return 0;
}