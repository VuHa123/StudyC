#include<stdio.h>

void main(){
    printf("Huong dan giai phuong trinh bac hai ax^2 + bx + c = 0:\n");
    printf("1. Xac dinh he so a, b, c cua phuong trinh.\n");
    printf("2. Tinh delta theo cong thuc: delta = b^2 - 4 * a * c.\n");
    printf("3. Xet cac truong hop:\n");
    printf(" - Neu delta < 0: Phuong trinh vo nghiem.\n");
    printf(" - Neu delta = 0: Phuong trinh co nghiem kep x = -b / (2 * a).\n");
    printf(" - Neu delta > 0: Phuong trinh co hai nghiem phan biet:\n");
    printf(" x1 = (-b + sqrt(delta)) / (2 * a)\n");
    printf(" x2 = (-b - sqrt(delta)) / (2 * a)\n");
    printf("4. Ket luan va ghi lai nghiem cua phuong trinh.\n");
}`