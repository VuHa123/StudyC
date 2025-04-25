#include<stdio.h>
#include<string.h>

int main(){
    float tien_dau_ky;
    float f, tien_lai = 0, sodu = 0, tong_lai = 0;
    char ten[20], ch;
    printf("Nhap lai xuat hang thang: ");
    scanf("%f", &f);
    printf("Nhap so tien gui dau ky: ");
    scanf("%f", &tien_dau_ky);
    scanf("%c", &ch);
    printf("Nhap ten khach hang: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strcspn(ten, "\n")] = '\0';
    // In bang tien llai hang thang
    printf("\nBang tien llai hang thang\n");
    printf("Tai khoan khach hang: %s\n", ten);
    printf("%10s%20s%15s%15s\n", "Thang", "Tien dau ky", "Tien lai", "So du");
    for(int i = 1; i < 13; i++){
        tien_lai = tien_dau_ky * f;
        sodu = tien_dau_ky + tien_lai;
        tong_lai += tien_lai;
        printf("%10d%20.0f%15.0f%15.0f\n", i, tien_dau_ky, tien_lai, sodu);
        tien_dau_ky = sodu;
    }
    printf("Tong lai: %.0f\n", tong_lai);
}