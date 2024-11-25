#include<stdio.h>
#include<string.h>
int main(){
    char ten1[30], que1[30], ten2[30], que2[30], ch;
    int tuoi1, tuoi2;
    //Sinh vien 1
    printf("Nhap thong tin sinh vien 1: \n");
    printf("- Ten: ");
    fgets(ten1, sizeof(ten1), stdin);
    ten1[strlen(ten1) - 1] = '\0';
    printf("- Que quan: ");
    fgets(que1, sizeof(que1), stdin);
    que1[strlen(que1) - 1] = '\0';
    printf("- Tuoi: ");
    scanf("%d", &tuoi1);
    scanf("%c",&ch);
    //Nhap du lieu cho sinh vien 1
    printf("Nhap thong tin sinh vien 1: ");
    printf("\n- Ten: ");
    fgets(ten2,sizeof(ten2),stdin);
    ten2[strlen(ten2)-1] = '\0';
    printf("- Que quan: ");
    fgets(que2,sizeof(que2),stdin);
    que2[strlen(que2)-1] = '\0';
    printf("- Tuoi: ");
    scanf("%d",&tuoi2);
    scanf("%c",&ch);
    //Xuat thong tin sinh vien
    printf("\n\n\tCac sinh vien da nhap vao:\n");
    printf("\t+-----------------+------------+------+\n");
    printf("\t| %15s | %10s | %4s |\n","Ho va ten","Que quan","Tuoi");
    printf("\t+-----------------+------------+------+\n");
    printf("\t| %15s | %10s | %4d |\n",ten1,que1,tuoi1);
    printf("\t+-----------------+------------+------+\n");
    printf("\t| %15s | %10s | %4d |\n",ten2,que2,tuoi2);
    // printf("\t+-----------------+------------+------+\n");
    // printf("\n\nCac sinh vien da nhap vao: \n");
    // printf("\t|%15s|%10s|%4s|\n", "Ho va ten", "Que quan", "Tuoi");
    // printf("\t|%15s|%10s|%4d|\n", ten1, que1, tuoi1);
    // printf("\t|%15s|%10s|%4d|\n", ten2, que2, tuoi2);
}