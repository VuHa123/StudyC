#include<stdio.h>


void Nhap(int n, int a[]){
    printf("Nhap vao cac phan tu cua mang: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(int n, int a[]){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
void Tangdan(int n, int a[]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void Giamdan(int n, int a[]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] < a[j + 1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    Nhap(n, a);
    printf("Mang vua nhap: ");
    //Menu
    int chon;
    printf("Chuong trinh sap xep mang\n");
    printf("1. Sap xep tang dan\n");
    printf("2. Sap xep giam dan\n");
    printf("3. Thoat chuong trinh\n");
    do{
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &chon);
        switch(chon){
            case 1: 
                Tangdan(n, a);
                printf("Mang sau khi sap xep tang dan: ");
                Xuat(n, a);
                printf("\n");
                break;
            case 2: 
                Giamdan(n, a);
                printf("Mang sau khi sap xep giam dan: ");
                Xuat(n, a);
                printf("\n");
                break;
        }
    }while(1);
}