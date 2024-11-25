#include<stdio.h>

void Nhapmatran(int n, int a[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        scanf("%d", &a[i][j]);
        }
    }
}

void Xuatmatran(int n, int a[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void Cong(int n, int a[n][n], int b[n][n], int c[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void Tru(int n, int a[n][n], int b[n][n],int c[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

void Nhan(int n, int a[n][n], int b[n][n], int c[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = a[i][j] * b[i][j];
        }
    }
}

int main(){
    int n;
    printf("Nhap vao kich thuoc cua ma tran vuong: ");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    //Nhap vao ma tran A
    printf("Nhap vao ma tran A:\n");
    Nhapmatran(n, a);
    //Nhap vao ma tran B
    printf("Nhap vao ma tran B:\n");
    Nhapmatran(n, b);
    //Chuong trinh tinh toan
    printf("Tinh toan cac ma tran.\n");
    printf("Phep cong: 1\n");
    printf("Phep tru: 2\n");
    printf("Phep nhan: 3\n");
    printf("Thoat: An phim bat ky.\n");
    printf("Lua chon cua ban: ");
    int choice;
    scanf(" %d", &choice);
    switch(choice){
        case 1:
            Cong(n, a, b, c);
            printf("Kết quả của phép cộng:\n");
            Xuatmatran(n, c);
            break;
        case 2:
            Tru(n, a, b, c);
            printf("Kết quả của phép cộng:\n");
            Xuatmatran(n, c);
            break;
        case 3:
            Nhan(n, a, b, c);
            printf("Kết quả của phép nhân:\n");
            Xuatmatran(n, c);
            break;
        default:
            printf("Thoat chuong trinh!");
            break;
    }
    return 0;
}