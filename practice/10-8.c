#include<stdio.h>
#include<stdlib.h>
#define N 50
#define DIENNANG 400
#define GIADIEN 0.75

void Dungmay(int *a, int *useCount, int *power){
    int id;
    printf("Nhap id may: ");
    scanf("%d",&id);
    if(id < 1 || id > N){
        printf("Khong co may co id nay\n");
    }else if(a[id -1] == 1){
        printf("May da duoc dung\n");
    }else{
        a[id - 1] = 1;
        useCount[id - 1]++;
        power[id - 1] += DIENNANG;
        printf("May %d da duoc dung\n", id);
    }
}

void Roimay(int *a){
    int id;
    printf("Nhap id may: ");
    scanf("%d",&id);
    if(id < 1 || id > N){
        printf("Khong co may co id nay\n");
    }else{
        a[id -1] = 0;
        printf("May %d da ve trang thai roi\n", id);
    }
}

int Tiendien(int *power){
    int tongdien = 0;
    for(int i = 0; i < N; i++){
        tongdien += power[i];
    }
    printf("Tong dien nang tieu thu la: %d\n", tongdien);
    printf("Tong tien dien la: %d\n", tongdien*GIADIEN);
}
int Diennand(int *power){
    for(int i = 0; i < N; i++){
        printf("May %d co dien nang %dw\n", i + 1, power[i]);
    }
}
void Frequently_use(int *useCount){
    int max = useCount[0];
    int min = useCount[0];
    for(int i = 0; i < N; i++){
        if(useCount[i] > max){
            max = useCount[i];
        }
        if(useCount[i] < min){
            min = useCount[i];
        }
    }
    for(int i = 0; i < N; i++){
        if(useCount[i] == max){
            printf("May %d da duoc dung nhieu nhat\n", i + 1);
        }
        if(useCount[i] == min){
            printf("May %d da duoc dung thieu nhat\n", i + 1);
        }
    }
}
void In_status(int *a){
    printf("Trang thai may\n");
    for(int i = 0; i < N; i++){
        if(a[i] == 1){
            printf("May %d da duoc dung\n", i + 1);
        }else printf("May %d dang roi\n", i + 1);
    }
}
int main(){
    //hàm calloc cấp phát bộ nhớ động và khởi tạo tất cả các giá trị về 0
    int *status = (int *)calloc(N, sizeof(int));
    if(status == NULL){
        printf("Khong the cap phat bo nho\n");
        return 0;
    }
    int *usageCount = (int *)calloc(51, sizeof(int));
    if(usageCount == NULL){
        printf("Khong the cap phat bo nho\n");
        return 0;
    }
    int *diennang = (int *)calloc(51, sizeof(int));
    int totalPower = 0;
    int id;
    int chon;
    printf("CHUONG TRINH QUAN LY MAY TINH PHONG LAB 502\n");
    printf("1. Dung may\n");
    printf("2. Roi may\n");
    printf("3. In ra trang thay cac may\n");
    printf("4. In ra dien nang tieu thu tich luy tren cac may do den thoi diem hien tai\n");
    printf("5. In ra tong dien nang tieu thu- va tien dien thanh toan(750VND/KW)\n");
    printf("6. In ra nhung may duoc dung nhieu nhat va it nhat\n");
    printf("7. Thoat chuong trinh\n");
    do{
        printf("Nhap lua chon cua ban: ");
        scanf("%d",&chon);
        switch(chon){
            case 1: Dungmay(status, usageCount, diennang); break;
            case 2: Roimay(status); break;
            case 3: In_status(status); break;
            case 4: Diennand(diennang); break;
            case 5: Tiendien(diennang); break;
            case 6: Frequently_use(usageCount); break;
            default: printf("Ket thuc chuong trinh\n"); return 0;

        }
    }while(1);
    free(status);
    free(usageCount);
    free(diennang);
    return 0;
}