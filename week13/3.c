#include<stdio.h>
#include<string.h>

int main(){
    char str[100], *ten;
    printf("Nhap vao xau ky tu: ");
    fgets(str, sizeof(str), stdin);
    ten = strrchr(str, ' ') + 1;//tim khoang trang cuoi cung

    
    printf("Ten: %s\n", ten);
    return 0;
}