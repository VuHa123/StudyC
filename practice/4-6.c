#include<stdio.h>
#include<string.h>

int main(){
    int stt;
    char date[20], tenlop[15], tenmon[15], start[8], end[8], ch;
    printf("Nhap so thu tu: ");
    scanf("%d", &stt);
    scanf("%c", &ch);
    fgets(date, sizeof(date), stdin);
    date[strlen(date) - 1] = '\0';
    fgets(tenlop, sizeof(tenlop), stdin);
    tenlop[strlen(tenlop) - 1] = '\0';
    fgets(tenmon, sizeof(tenmon), stdin);
    tenmon[strlen(tenmon) - 1] = '\0';
    fgets(start, sizeof(start), stdin);
    start[strlen(start) - 1] = '\0';
    fgets(end, sizeof(end), stdin);
    end[strlen(end) - 1] = '\0';

    printf("Nhat ky su dung phong thuc hnah cua giang vien Viet Nhat\n");
    printf("%3s%20s%15s%15s%10s%10s\n", "STT", "Ngay Thang", "Ten lop", "Ten mon hoc", "Bat dau", "Ket Thuc");
    printf("%3d%20s%15s%15s%10s%10s\n", stt, date, tenlop, tenmon, start, end);
    return 0;
}