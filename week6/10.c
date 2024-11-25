#include<stdio.h>
#include<string.h>
#define SALE 0.5
#define SUNDAY 10.0
#define NORMAL 7.0

void main(){
    char movie_name[30], ch;
    float price, total;
    int quantity, date, ticket_type;
    printf("Ten phim: ");
    fgets(movie_name, sizeof(movie_name), stdin);
    movie_name[strlen(movie_name) - 1] = '\0';
    printf("So luong ve: ");
    scanf("%d", &quantity);
    printf("Loai ve (Nhap 1- Tre em, khac- Nguoi lon): ");
    scanf("%d", &ticket_type);
    printf("- Ngay xem(Nhap 1- Chu nhat, khac- Ngay thuong: ");
    scanf("%d", &date);
    //Xuat thong tin
    printf("Thong tin ve: \n");
    printf("- Ten phim: %s\n", movie_name);
    if(date == 1){
        printf("Ngay xem: Chu nhat");
        price = SUNDAY;
    }
    else{
        printf("Ngay xem: Ngay thuong");
        price = NORMAL;
    }
    printf("\n- So luong ve: %d", quantity);
    if(ticket_type == 1){
        price *= SALE;
    }
    total = price * quantity;
    printf("\n- So tien thanh toan: %.2f", total);
}