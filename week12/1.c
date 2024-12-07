#include<stdio.h>
#include<stdlib.h>

void Nhapmang(int n, int a[n]){
    for(int i = 0; i < n; i++){
        printf("Nhap vao phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

int CountEven(int *a, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    Nhapmang(n, a);
    printf("So phan tu chan trong mang la: %d\n", CountEven(a, n));
    free(a);
    return 0;
}