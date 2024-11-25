#include<stdio.h>

int calculating(float a, float b, int option){
    switch(option){
        case 1:
            printf("a + b = %.2f\n", a + b);
            break;
        case 2:
            printf("a - b = %.2f\n", a - b);
            break;
        case 3:
            printf("a * b = %.2f\n", a * b);
            break;
        case 4:
            if(b == 0){
                printf("Loi. Khong the chia cho 0\n");
                printf("Nhap lai so b!\n");
                scanf("%f", &b);
                printf("a / b = %.2f\n", a/b);
            }
            else{
                printf("a / b = %.2f\n", a/b);
            }
            break;
            }
    if(option != 1 || option != 2 || option != 3 || option != 4){
        return 1;
    }
}
int main(){
float a, b;
int option;
printf("Nhap so a: ");
scanf("%f", &a);
printf("Nhap so b: ");
scanf("%f", &b);
//Giao dien may tinh
printf("CHUONG TRINH MAY TINH DIEN TU\n");
printf("\tAn phim 1- Phep cong\n");
printf("\tAn phim 2- Phep tru\n");
printf("\tAn phim 3- Phep nhan\n");
printf("\tAn phim 4- Phep chia\n");
printf("\tThoat: an phim khac\n");
printf("Moi ban chon phep tinh: ");
fflush(stdin);
scanf("%d", &option);
calculating(a, b, option);

}