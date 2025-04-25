#include<stdio.h>

int Menu(int a, int b, int method, char end){
    printf("CHUONG TRINH TINH\n");
    printf("1- Phep cong\n");
    printf("2- Phep tru\n");
    printf("3- Phep nhan\n");
    printf("4- Phep chia\n");
    printf("An phim khac: Thoat\n");
    do{
        printf("Moi ban lua chon chuong trinh: ");
        scanf("%d", &method);
        switch(method){
        case 1: printf("Ban da chon chuong trinh tinh tong\n"); break;
        case 2: printf("Ban da chon chuong trinh tinh hieu\n"); break;
        case 3: printf("Ban da chon chuong trinh tinh tich\n"); break;
        case 4: printf("Ban da chon chuong trinh tinh thuong\n"); break;
        default: return 0;
        }
        printf("Nhap so thu 1: ");
        scanf("%d", &a);
        printf("Nhap so thu 2: ");
        scanf("%d", &b);
        switch(method){
            case 1: printf("Tong hai so la: %d\n", a + b); break;
            case 2: printf("Hieu hai so la: %d\n", a - b); break;
            case 3: printf("Tich hai so la: %d\n", a * b); break;
            case 4:     
                if(b == 0) printf("Khong the chia cho so cho nhau\n");
                else printf("Thuong hai so la: %d\n", a / b);
                break;
        }
        printf("Ban co muon tiep tuc chuong trinh?(y/n): ");
        scanf(" %c", &end);
        switch(end){
            case 'y': break;
            case 'Y': break;
            default: return 0;
        }
    }while(1);
}

int main(){
    int a, b, method;
    char end;
    Menu(a, b, method, end);
    return 0;
}