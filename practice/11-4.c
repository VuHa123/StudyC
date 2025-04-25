#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    int *p;
    printf("Nhap vao cac phan tu cua mang a: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    //Mang dao nguoc
    for(int i = n-1; i >= 0; i--){
        p = &a[i];
        printf("%d ", *p);
    }
}