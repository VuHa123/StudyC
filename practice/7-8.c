#include<stdio.h>

int main(){
    int chanle, n, tongchan = 0, tongle = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    do{
        printf("Chuong trinh tinh tong cac so chan/le\n");
        printf("Nhan 1: Tong chan\n");
        printf("Nhan 2: Tong le\n");
        printf("Nhan khac: Ket thuc\n");
        printf("Moi ban chon!\n");
        scanf("%d", &chanle);
        switch(chanle){
        case 1: 
            for(int i = 0; i < n; i++){
                if(i % 2 == 0){
                    tongchan += i;
                }
            }
            printf("Tong cac so chan tu 1 den %d la: %d\n", n, tongchan);
            break;
        case 2:
            for(int i = 0; i < n; i++){
                if(i % 2 != 0){
                    tongle += i;
                }
            }
            printf("Tong cac so le tu 1 den %d la: %d\n", n, tongle);
            break;
        default: printf("Ket thuc chuong trinh tinh!\n"); return 0;
        }
    }while(1);
    return 0;
}