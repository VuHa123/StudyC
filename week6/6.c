#include<stdio.h>

int main(){
    int a;
    scanf("%3d", &a);
    int tram, chuc, donvi;
    tram = a / 100;
    chuc = (a / 10) % 10;
    donvi = a % 10;
    switch (tram)
    {
        case 1: printf("Một trăm"); break;
        case 2: printf("Hai trăm"); break;
        case 3: printf("Ba trăm"); break;
        case 4: printf("Bốn trăm"); break;
        case 5: printf("Năm trăm"); break;
        case 6: printf("Sáu trăm"); break;
        case 7: printf("Bảy trăm"); break;
        case 8: printf("Tám trăm"); break;
        case 9: printf("Chín trăm"); break;
    }
    if(chuc == 0 & donvi == 0){
        printf("");
    }else if(chuc != 0){
        switch (chuc){
            case 1: printf(" mười"); break;
            case 2: printf(" hai mươi"); break;
            case 3: printf(" ba mươi"); break;
            case 4: printf(" bốn mươi"); break;
            case 5: printf(" năm mươi"); break;
            case 6: printf(" sáu mươi"); break;
            case 7: printf(" bảy mươi"); break;
            case 8: printf(" tám mươi"); break;
            case 9: printf(" chín mươi"); break;
        }
    }
    if(donvi != 0){
        switch (donvi){
            case 1: printf(" mốt"); break;
            case 2: printf(" hai"); break;
            case 3: printf(" ba"); break;
            case 4: printf(" bốn"); break;
            case 5: printf(" năm"); break;
            case 6: printf(" sáu"); break;
            case 7: printf(" bảy"); break;
            case 8: printf(" tám"); break;
            case 9: printf(" chín"); break;
        }
    }
}