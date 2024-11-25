#include<stdio.h>
int main(){
    int a;
    int giay, phut, gio;
    printf("Nhap vao so giay: ");
    scanf("%d",&a);
    if(giay<0){
    printf("So giay khong hop le");
    printf("Nhap vao so giay: ");
    scanf("%d",&giay);
    }
    else{
    gio=a/3600;
    phut=(a%3600)/60;
    giay=a%60;
    }
    printf("%d = %02d:%02d:%02d\n", a, gio, phut, giay);
}