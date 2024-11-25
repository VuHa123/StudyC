#include<stdio.h>
#include<string.h>
#define LAI 0.012

int main(){
    char ten[30];
    float tien_gui, tien_lai, so_du, tong_lai;
    printf("Nhap ten khach hang: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strlen(ten) - 1] = '\0';
    printf("Nhap so tien gui: ");
    scanf("%f", &tien_gui);
    tien_lai = tien_gui * LAI;
    so_du = tien_gui + tien_lai;
    //Xuat du lieu
    printf("\n\n");
    printf("Tai khoan khach hang: %s", ten);
    printf("%8s %15s %10s %10s\n", "Thang", "Tien dau ky", "Tien lai", "So du");
    for(int i = 0; i < 12; i++){
        printf("%8d %15.2f %10.2f %10.2f\n", i, tien_gui, tien_lai, so_du);
        tien_gui = so_du;
        tien_lai = tien_gui * LAI;
        so_du = tien_gui + tien_lai;
        tong_lai += tien_lai;
    }
    printf("\nTong lai: %.2f", tong_lai);
    return 0;
}