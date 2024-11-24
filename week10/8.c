#include<stdio.h>
#include<stdlib.h>

#define DIENNANG 400
#define GIADIEN 0.75//gia: 0.75VND/W

void Dungmay(int *a, int *useCount, int *power){
    int id;
    printf("Nhap id may: ");
    scanf("%d",&id);
    if(id < 1 || id > 50){
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
    if(id < 1 || id > 50){
        printf("Khong co may co id nay\n");
    }else{
        a[id -1] = 0;
        printf("May %d da ve trang thai roi\n", id);
    }
}

void In_trang_thai_may(int *a){
    printf("Trang thai may.\n");
    for(int i = 0; i < 50; i++){
        if(a[i] == 1){
            printf("May %d dang duoc dung\n", i + 1);
        }else{
            printf("May %d dang roi\n", i + 1);
        }
    }
}
//In ra dien nang tich luy tren moi may
void Diennang(int *power){
    for(int i = 0; i < 50; i++){
        printf("May %d co dien nang %dW\n", i + 1, power[i]);
    }
}

void Tongtien(int *power){
    int tongdien = 0;
    for(int i = 0; i < 50; i++){
        tongdien += power[i];
    }
    printf("Tong dien nang tieu thu la: %d W", tongdien);
    printf("Tong tien la: %d VND\n", tongdien * GIADIEN);
}

void Tim_may(int *useCount){
    int max = useCount[0];
    int min = useCount[0];
    for(int i = 0; i < 50; i++){
        if(useCount[i] > max){
            max = useCount[i];
        }
        if(useCount[i] < min){
            min = useCount[i];
        }
    }
    for(int i = 0; i < 50; i++){
        if(useCount[i] == max){
            printf("May %d da duoc dung nhieu nhat\n", i + 1);
        }
        if(useCount[i] == min){
            printf("May %d da duoc dung thieu nhat\n", i + 1);
        }
    }
}

int main(){
    int *status = (int *)calloc(51, sizeof(int));
    int *usageCount = (int *)calloc(51, sizeof(int));
    int *Power = (int *)calloc(DIENNANG, sizeof(int));
    int totalPower = 0;
    int choice, id;

    //Menu
    while(1){
        printf("Quan ly su dung may tinh phong Lab 502-A6.\n");
        printf("Chon 1: Dung may.\n");
        printf("Chon 2: Roi may.\n");
        printf("Chon 3: In ra trang thai cac may(dang su dung - tat).\n");
        printf("Chon 4: In ra dien nang tieu thu tich luy tren cac may cho dien thoi diem hien tai.\n");
        printf("Chon 5: In ra tong dien nang tieu thu - va tien dien thanh toan(750VND/KW).\n");
        printf("Chon 6: In ra nhung may duoc dung nhieu nhat va it nhat.\n");
        printf("Lua chon cua ban.\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                Dungmay(status, usageCount, Power);
                break;
            case 2:
                Roimay(status);   
                break;
            case 3:
                In_trang_thai_may(status);
                break;
            case 4:
                Diennang(Power);
                break;
            case 5:
                Tongtien(Power);
                break;
            case 6:
                Tim_may(usageCount);
                break;
            default:
                printf("Lua chon khong hop le.\n");
                printf("Thoat chuong trinh.\n");
                free(status);
                free(usageCount);
                free(Power);
                return 0;
        }
    }
    
    return 0;
}