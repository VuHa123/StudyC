#include<stdio.h>
#include<string.h>
#define GOLD 0.3
#define SILVER 0.6
#define CITIZEN 0.7
#define PHI_NOI_TRU 150000

int main(){
    char ten[30], que[15], ngaysinh[15], gioi_tinh[3], loai_the, ch;
    int date;
    float tien_phau_thuat, tien_thuoc, vien_phi;
    printf("Nhap ten: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strlen(ten) - 1] = '\0';
    printf("Nhap que: ");
    fgets(que, sizeof(que), stdin);
    que[strlen(que) - 1] = '\0';
    printf("Nhap ngay sinh: ");
    fgets(ngaysinh, sizeof(ngaysinh), stdin);
    ngaysinh[strlen(ngaysinh) - 1] = '\0';
    printf("Nhap gioi tinh: ");
    fgets(gioi_tinh, sizeof(gioi_tinh), stdin);
    gioi_tinh[strlen(gioi_tinh) - 1] = '\0';
    printf("So ngay nam vien: ");
    scanf("%d", &date);
    printf("Nhap so tien thuoc: ");
    scanf("%f", &tien_thuoc);
    printf("Nhap so tien phau thuat: ");
    scanf("%f", &tien_phau_thuat);
    // scanf("%c", &ch);
    vien_phi = tien_phau_thuat + PHI_NOI_TRU + tien_thuoc;
    printf("Nhap loai the bao hiem y te: ");
    scanf("%c", &loai_the);
    switch(loai_the){
    case 'G':
    vien_phi *= GOLD;
    break;
    case 'S':
    vien_phi *= SILVER;
    break;
    case 'C':
    vien_phi *= CITIZEN;
    break;
    default:
    return 1;
    }
    //In hoa don

    printf("\n\nHoa don\n");
    printf("Ten: %s\n", ten);
    printf("Que quan: %s\n", que);
    printf("Ngay sinh: %s\n", ngaysinh);
    printf("Gioi tinh: %s\n", gioi_tinh);
    printf("So ngay nam vien: %d\n", date);
    printf("So tien thuoc: %.2f\n", tien_thuoc);
    printf("So tien phau thuat: %.2f\n", tien_phau_thuat);
    printf("Loai the bao hiem y te: %c\n", loai_the);
    printf("So tien phi: %.2f\n", vien_phi);
    return 0;

}