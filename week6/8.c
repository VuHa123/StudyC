#include<stdio.h>

void main(){
    float diem;
    printf("Nhap diem: ");
    scanf("%f", &diem);
    if(diem<0 || diem > 10){
        printf("Diem khong hop le!");
        printf("Nhap lai diem!");
        scanf("%f", &diem);
    }
    if(diem < 5){
        printf("Hoc luc kem\n");
    }
    if(diem >= 5 && diem < 7){
        printf("Hoc luc trung binh\n");
    }
    if(diem >= 7 && diem < 8){
        printf("Hoc luc kha\n");
    }
    if(diem >=8 && diem < 9){
        printf("Hoc luc gioi\n");
    }
    if(diem >= 9 && diem <= 10){
        printf("Hoc luc xuat sac\n");
    }
}