#include<stdio.h>
#include<string.h>

int main(){
    char ten1[20], ten2[20], que1[15], que2[15], ch;
    int tuoi1, tuoi2;
    printf("Nhap thong tin sinh vien 1: \n");
    printf("Nhap ho va ten: ");
    fgets(ten1, sizeof(ten1), stdin);
    ten1[strlen(ten1) - 1] = '\0';
    printf("Nhap que quan: ");
    fgets(que1, sizeof(que1), stdin);
    que1[strlen(que1) - 1] = '\0';
    printf("Nhap tuoi cua sinh vien: ");
    scanf("%d", &tuoi1);
    scanf("%c", &ch);
    printf("\nNhap thong tin sinh vien 2: \n");
    printf("Nhap ho va ten: ");
    fgets(ten2, sizeof(ten2), stdin);
    ten2[strlen(ten2) - 1] = '\0';
    printf("Nhap que quan: ");
    fgets(que2, sizeof(que2), stdin);
    que2[strlen(que2) - 1] = '\0';
    printf("Nhap tuoi cua sinh vien: ");
    scanf("%d", &tuoi2);
    scanf("%c", &ch);
    printf("\nCaC sinh vien da nhap vao: \n");
    printf("(*------------------------------------------------*\n");
    printf("%20s|%15s|%10s|", "Ten", "Que quan", "Tuoi");
    printf("\n*-------------------------------------------------*\n");
    printf("%20s|%15s|%10d|", ten1, que1, tuoi1);
    printf("\n*-------------------------------------------------*\n");
    printf("%20s|%15s|%10d|\n", ten2, que2, tuoi2);
    return 0;
}