#include<stdio.h>

int main(){
    int seconds;
    printf("Nhap vao so giay: ");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int second = seconds % 60;
    printf("So gio la: %02d:%02d:%02d", hours, minutes, second);
    return 0;
}