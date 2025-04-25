#include<stdio.h>
#include<string.h>
#define GOLD 0.3
#define SILVER 0.5
#define CITIZEN 0.7

int main(){
    char ten[20], loai_the_BHYT, BHYT[10], ch;
    float tien_thuoc, tien_phau_thuat, ngay_nam_vien, vienphi = 0;
    //Nhap thong tin ve benh nhan
    printf("Nhap ten benh nhan: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strlen(ten) - 1] = '\0';
    printf("Tien phau thuat: ");
    scanf("%f", &tien_phau_thuat);
    printf("So ngay nam vien: ");
    scanf("%f", &ngay_nam_vien);
    scanf("%c", &ch);
    printf("Loai the BHYT(GOLD - G/SILVER - S/CITIZEN - C): ");
    scanf("%c", &loai_the_BHYT);

    switch(loai_the_BHYT){
        case 'G': 
        vienphi *= GOLD;
        strcpy(BHYT, "GOLD");
        break;
        case 'S':
        vienphi *= SILVER;
        strcpy(BHYT, "SILVER");
        break;
        case 'C':
        vienphi *= CITIZEN;
        strcpy(BHYT, "CITIZEN");
        break;
        default:
        return 1;
    }
    printf("Nhap tien thuoc: ");
    scanf("%f", &tien_thuoc);
    printf("\nHOA DON\n");
    printf("Ten benh nhan: %s\n", ten);
    printf("Phau thuat: %.2f\n", tien_phau_thuat);
    printf("So ngay nam vien: %.2f\n", ngay_nam_vien);
    printf("Loai the BHYT: %s\n", BHYT);
    printf("Tien thuoc: %.2f\n", tien_thuoc);
    //Tinh vien phi
    vienphi = tien_phau_thuat + 150000 * ngay_nam_vien + tien_thuoc;
    printf("Tong vien phi la: %.2f", vienphi);
}