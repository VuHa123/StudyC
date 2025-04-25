#include<stdio.h>

int main(){
    int namsinh, tuoi;

    do{
        printf("Nhap nam sinh: ");
        scanf("%d", &namsinh);
        tuoi = 2025 - namsinh;
        if(tuoi < 0) printf("Ban da nhap sai nam sinh. Vui long nhap lai!\n");
    }while(tuoi < 0);
    
    if(tuoi > 0 && tuoi < 6) printf("Nguoi dung la tre em.\n");
    else if(tuoi >= 6 && tuoi < 11) printf("Nguoi dung la hoc sinh cap 1.\n");
    else if(tuoi >= 11 && tuoi < 15) printf("Nguoi dung la hoc sinh cap 2.\n");
    else if(tuoi >= 15 && tuoi < 18) printf("Nguoi dung la hoc sinh cap 3.\n");
    else if(tuoi >= 18 && tuoi < 40) printf("Nguoi dung la thanh nien.\n");
    else if(tuoi >= 40 && tuoi < 60) printf("Nguoi dung la trung nien.\n");
    else printf("Nguoi dung la nguoi gia.\n");
    return 0;

}