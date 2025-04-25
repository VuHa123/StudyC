#include<stdio.h>
#include<math.h>

void Nhap(int n, int a[]){
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

void Giamdan_abs(int n, int a[]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(fabs(a[j]) < fabs(a[j + 1])){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);
    int a[n];
    Nhap(n, a);
    printf("Day chua sap xep: ");
    Xuat(n, a);
    printf("\nDay sau khi sap xep tang dan: ");
    Tangdan(n, a);
    Xuat(n, a);
    printf("\nDay sau khi sap xep giam dan: ");
    Giamdan(n, a);
    Xuat(n, a);
    printf("\nDay sau khi sap xep giam dan theo gia tri tuyet doi: ");
    Giamdan_abs(n, a);
    Xuat(n, a);
    return 0;
}