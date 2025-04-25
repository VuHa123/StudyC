#include<stdio.h>

int main(){
    float a, b, tong, hieu, tich, thuong;
    int type;
    printf("Nhap 2 so thuc a, b: ");
    scanf("%f %f", &a, &b);
    printf("CHUONG TRINH MAY TINH DIEN TU\n");
    printf("\t An phim 1 - Phep cong\n");
    printf("\t An phim 2 - Phep tru\n");
    printf("\t An phim 3 - Phep nhan\n");
    printf("\t An phim 4 - Phep chia\n");
    printf("\t Thoat: an phim khac\n");
    while(1){
        printf("Moi ban chon phep tinh\n");
        scanf("%d", &type);
        switch(type){
            case 1: printf("a + b = %.2f\n", a +b); break;
            case 2: printf("a - b = %.2f\n", a - b); break;
            case 3: printf("a * b = %.2f\n", a * b); break;
            case 4: if(b != 0) printf("a / b = %.2f\n", a/b); break;
            default: printf("Ket thuc chuong trinh\n"); return 0;
        }
    }
    return 0;
}