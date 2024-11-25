#include<stdio.h>
#include<string.h>

int main(){
    char date[15], class[10], subject[15], start[10], end[10], ch;
    int stt;
    printf("Nhap vao STT: ");
    scanf("%d", &stt);
    scanf("%c", &ch);
    printf("Nhap vao ngay hoc: ");
    fgets(date, sizeof(date), stdin);
    date[strlen(date) - 1] = '\0';
    printf("Nhap ten lop: ");
    fgets(class, sizeof(class), stdin);
    class[strlen(class) - 1] = '\0';
    printf("Nhap ten mon hoc: ");
    fgets(subject, sizeof(subject), stdin);
    subject[strlen(subject) -1 ] = '\0';
    printf("Nhap gio bat dau: ");
    fgets(start, sizeof(start), stdin);
    start[strlen(start) - 1] = '\0';
    printf("Nhap gio ket thuc: ");
    fgets(end, sizeof(end), stdin);
    end[strlen(end) - 1] = '\0';

    //Bang thong ke
    printf("\n\n%5s %10s %10s %15s %7s %7s\n", "STT", "Ngay thang", "Ten lop", "Ten mon hoc", "Bat dau", "Ket thuc");
    printf("%5d %10s %10s %15s %7s %7s\n", stt, date, class, subject, start, end);
    return 0;
}