#include<stdio.h>

int  main(){
    int sodien, tiendien;
    printf("Nhap so dien: ");
    scanf("%d", &sodien);
    if(sodien > 1 && sodien <= 50) tiendien = sodien * 500;
    else if(sodien > 50 && sodien <= 100) tiendien = sodien * 1000;
    else if(sodien > 100 && sodien <= 150) tiendien = sodien * 1200;
    else if(sodien > 150 && sodien <= 200) tiendien = sodien * 2000;
    printf("So dien tieu thu trong thang la: %d\n", sodien);
    printf("So tien phai tra la: %d\n", tiendien);
    return 0;
}