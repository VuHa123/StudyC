#include<stdio.h>
#include<string.h>
#define DISCOUNT 0.5
#define Sunday 10
#define Others 7

int main(){
    char ten[20];
    int num_of_tick, type_tick, date;
    //Nhap thong tin ve
    printf("Ten phim: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strlen(ten) - 1] = '\0';
    printf("So luong ve: ");
    scanf("%d", &num_of_tick);
    printf("Loai ve: (Nhap 1 - Tre em, khac - Nguoi lon): ");
    scanf("%d", &type_tick);
    printf("Ngay xem (Nhap 1 - Chu nhat, khac - Ngay thuong): ");
    scanf("%d", &date);
    //tinh gia
    float gia = 0;
    if (type_tick == 1){
        gia = num_of_tick * DISCOUNT;
    }else{
        gia = num_of_tick;
    }
    if (date == 1){
        gia = gia * Sunday;
        }
    else{
        gia = gia * Others;
    }
    //in ra ket qua
    printf("\nThong tin ve: \n");
    printf("- Ten phim: %s\n", ten);
    switch(date){
        case 1: printf("- Ngay xem: chu nhat.\n"); break;
        default: printf("- Ngay xem: ngay thuong.\n"); break;
    }
    printf("- So luong ve: %d\n", num_of_tick);
    printf("- So tien thanh toan: %.2f\n", gia);
    return 0;
}

