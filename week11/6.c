#include<stdio.h>
#include<string.h>

int main(){
    char s1[100], s2[100], *p1, *p2;
    printf("Nhap vao chuoi thu nhat: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = '\0';
    printf("Nhap vao chuoi thu hai: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strlen(s2) - 1] = '\0';
    p1 = s1;//để trỏ đến vị trí đâu tiên của mảng khác với p1 = &s1(vì &s1 là địa chỉ của toàn mảng
    //Cách để trỏ đến vị trí cuối(chỉ dùng trong trường hợp biết trước đồ dài của mảng
    // p1 = s1 + strlen(s1);
    //Để an toàn vi chưa biết đồ dài của mảng ta thực hiện vòng while
    while(*p1){
        p1++;
    }
    p2 = s2;
    while(*p2){
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';//Ket thuc chuoi 1
    printf("Chuoi sau khi chen: %s", s1);
    return 0;
}