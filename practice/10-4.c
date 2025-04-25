#include<stdio.h>
#include<math.h>
#include<string.h>

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

int Copy_duong(int n, int a[], int b[]){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            b[count] = a[i];
            count++;
        }
    }
    return count;
}
int Copy_am(int n, int a[], int c[]){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            c[count] = a[i];
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n], b[n], c[n];
    Nhap(n, a);
    printf("Cac so duong trong mang a la: ");
    int len_b = Copy_duong(n, a, b);
    Xuat(len_b, b);
    printf("\n");
    printf("Cac so am trong mang a la: ");
    int len_c = Copy_am(n, a, c);
    Xuat(len_c, c); 
    return 0;
}