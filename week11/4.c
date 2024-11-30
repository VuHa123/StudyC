#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;  
    int *p;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Mang dao nguoc: ");
    for (int i = n-1; i >= 0; i--){
        p = &a[i];//can phải trỏ con trỏ p đến địa tri của cụ thẻ trước khi sử dụng con tro p
        printf("%d ", *p);
    }
    return 0;
}