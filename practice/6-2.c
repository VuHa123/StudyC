#include<stdio.h>

int main(){
    int a, b;
    printf("Nhap 2 so a, b: ");
    scanf("%d %d", &a, &b);
    if(a > b) printf("So lon nhat la: %d\n", a);
    else printf("So lon nhat la: %d\n", b);
    return 0;
}