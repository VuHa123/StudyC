#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Nhapmang(double *a, int n){
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%lf", &a[i]);
    }
}
double Avg(double *a, int n){
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum/n;
}
double *TimGiatriGanTb(double *a, int n){
    double avg = Avg(a, n);
    double *b = &a[0];
    double mindiff = fabs(a[0] - avg);
    for(int i = 1; i < n; i++){
        double diff = fabs(a[i] - avg);
        if(mindiff > diff){
            mindiff = diff;
            b = &a[i];
        }
    }
    return b;
}
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    double *a = (double *)malloc(n *sizeof(double));
    Nhapmang(a, n);
    printf("Gia tri trung binh cua mang la: %lf\n", Avg(a, n));
    double *b = TimGiatriGanTb(a, n);
    printf("Gia tri gan nhat voi trung binh la: %lf\n", *b);
    return 0;
}