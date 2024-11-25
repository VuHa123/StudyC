#include<stdio.h>
#include<string.h>

int main(){
    float a,b, result;
    int choice;
    //Menu
    printf("CHUONG TRINH TINH\n");
    printf("1- Phep cong\n");
    printf("2- Phep tru\n");
    printf("3- Phep nhan\n");
    printf("4- Phep chia\n");
    printf("An phim khac: Thoat");
    printf("Moi ban lua chon chuong trinh: ");
    do{
        scanf("%d", &choice );
        if (choice >= 1 && choice <=4){
            printf("Nhap vao so thu nhat: ");
            scanf("%f", &a);
            printf("Nhap vao so thu hai: ");
            scanf("%f", &b);
        }
        switch (choice){
            case 1:
                result = a + b;
                printf("Ket qua: %.2f\n", result);
                break;
            case 2:
                result = a - b;
                printf("Ket qua: %.2f\n", result);
                break;
            case 3:
                result = a * b;
                printf("Ket qua: %.2f\n", result);
                break;
            case 4:
                if(b == 0){
                    printf("Khong the chia cho so 0\n");
                    printf("Nhap lai so b.\n");
                    scanf("%f", &b);
                    result = a/b;
                    printf("Ket qua: %.2f\n", result);
                }else{
                    result = a / b;
                    printf("Ket qua: %.2f", result);
                }
                break;
            default:
                printf("Thoat chuong trinh.");
                return 0;
        }
    }while(choice == 1 || choice == 2 || choice == 3 || choice == 4);
    return 0;
}