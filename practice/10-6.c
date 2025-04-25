#include<stdio.h>


void Nhap(int n, int a[]){
    printf("Nhap vao cac phan tu cua mang: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}
int SoSanh(int a[], int b[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: \n");
    scanf("%d", &n);
    int a[n], b[n];
    Nhap(n, a);
    Nhap(n, b);
    if(SoSanh(a, b, n)) printf("Hai mang bang nhau\n");
    else printf("Hai mang khac nhau\n");
    return 0;
}