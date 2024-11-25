#include<stdio.h>
int UCLN( int a, int b){
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int a, b, ucln;
    printf("Nhap so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b: ");
    scanf("%d", &b);
    ucln = UCLN(a,b);
    printf("Uoc chung lon nhat cua %d va %d la: %d", a,b,ucln);
    return 0;
}