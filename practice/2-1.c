#include<stdio.h>
#include<string.h>

int main(){
    char ten[20], que[15], khoa[20], lop[15], ch;
    int msv;
    printf("Nhap ho va ten: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strlen(ten) - 1] = '\0';
    printf("Nhap que quan: ");
    fgets(que, sizeof(que), stdin);
    que[strlen(que) - 1] = '\0';
    printf("Nhap ma sinh vien: ");
    scanf("%d", &msv);
    scanf("%c", &ch);
    printf("Nhap ten khoa: ");
    fgets(khoa, sizeof(khoa), stdin);
    khoa[strlen(khoa) - 1] = '\0';
    printf("Nhap ten lop: ");
    fgets(lop, sizeof(lop), stdin);
    lop[strlen(lop) - 1] = '\0';
    printf("Ho va ten: %s\n", ten);
    printf("Que quan: %s\n", que);
    printf("Ma sinh vien: %d\n", msv);
    printf("Khoa: %s\n", khoa);
    printf("Lop: %s\n", lop);
    return 0;

}