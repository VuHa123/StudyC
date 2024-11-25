#include<stdio.h>

int main(){
    int a;
    printf("Nhap vao thang: ");
    scanf("%d", &a);
    if(a==4 & a== 4 & a==6 & a==9 & a==11){
        printf("Thang %d co 30 ngay!\n");
    }
    else if(a==2){
        printf("Thang %d co 28 hoac 29 ngay!\n");
    }
    else{
        printf("Thang %d co 31 ngay!\n");
    }
}