#include<stdio.h>
#include<stdlib.h>

double* maximum(double *a, int n){
    double *max = &a[0];
    if(n == 0){
        return NULL;
    }
    for(int i = 1; i < n; i++){
        if(a[i] > *max){
            max = &a[i];
        }
    }
    return max;
}

void Nhapmang(double *a, int n){
    for(int i = 0; i < n; i++){
        printf("Nhap so thu %d: ", i + 1);
        scanf("%lf", &a[i]);
    }
}
int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    double *a = (double *)malloc(n*sizeof(double));
    Nhapmang(a, n);
    double *max = maximum(a, n);
    if(max == NULL){
        printf("Khong co phan tu trong mang");
    }else{
        printf("Phan tu lon nhat cua mang a la: %.2f\n", *max);
    }
    
    free(a);
    return 0;
}