#include<stdio.h>
#include<stdlib.h>

void Nhapmang(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void Xuatmang(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

void Tangdan(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n -1 -i; j++){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void Giamdan(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int maxIndex = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] > maxIndex){
            maxIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[maxIndex];
        a[maxIndex] = temp;
    }
}

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    Nhapmang(a,n);
    //Sap xep theo thu tu tang dan
    Tangdan(a,n);
    printf("Mang duoc sap xep theo thu tu tang dan: ");
    Xuatmang(a,n);
    //Sap xep theo thu tu giam dan
    Giamdan(a, n);
    printf("\nMang duoc sap xep theo thu tu giam dan: ");
    Xuatmang(a, n);
    return 0;
}