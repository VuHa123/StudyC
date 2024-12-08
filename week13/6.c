#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b;
    int k;
    printf("Nhap vao xau ky tu: ");
    // fgets(a, sizeof(a), stdin):
    scanf("%s", b);
    printf("Ky tu sau %d buoc dich chuyen la: %s\n", 2, b +2);
}