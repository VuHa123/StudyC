#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2;
    printf("Nhap vao so phan tu cua cac mang: ");
    scanf("%d %d", &n1, &n2);
    int *a = (int *)malloc(n1*sizeof(int));
    int *b = (int *)malloc(n2*sizeof(int));
    int *p, *q;
    printf("Nhap vao cac phan tu cua mang a: ");
    for(int i = 0; i < n1; i++){
        scanf("%d", &a[i]);
    }
    printf("Nhap vao cac phan tu cua mang b: ");
    for(int i = 0; i < n2; i++){
        scanf("%d", &b[i]);
    }
    p = a;
    q = b;
}