#include<stdio.h>

int main(){
    float diem;
    do{
        printf("Nhap diem: ");
        scanf("%f", &diem);
        if(diem < 0 || diem > 10){
            printf("Nhap khong hop le. Vui long nhap lai!\n");
        }
    }while(diem < 0 || diem > 10);
    if(diem > 0 && diem < 5) printf("Sinh vien co hoc luc kem.\n");
    else if(diem >= 5 && diem <7) printf("Sinh vien co hoc luc trung binh.\n");
    else if(diem >= 7 && diem < 8) printf("Sinh vien co hoc luc kha.\n");
    else if(diem >= 8 && diem < 10) printf("Sinh vien co hoc luc gioi.\n");
    else printf("Sinh vien co hoc luc xuat sac.\n");
    return 0;
}