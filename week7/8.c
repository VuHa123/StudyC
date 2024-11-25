#include<stdio.h>

int main(){
    int n, tong_chan, tong_le;
    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);
    tong_chan = 0;
    tong_le = 0;
    for(int i = 0; i <= n; i++){
    if(i % 2 == 0){
        tong_chan += i;
    } else {
        tong_le += i;
    }
    }
    //Giao dien
    printf("Chuong trinh may tinh\n");
    printf("Nhan 1: Tinh tong so chan\n");
    printf("Nhan 2: Tinh tong so le\n");
    printf("Nhan khac: Thoat chhuong trinh.\n");
    int chon;
    scanf("%d", &chon);
    switch(chon){
        case 1:
            printf("Tong cac so chan la: %d\n", tong_chan);
            break;
        case 2:
            printf("Tong cac so le la: %d\n", tong_le);
            break;
        default:
            printf("Chao tam biet!");
            return 0;
    }
    return 0;
}