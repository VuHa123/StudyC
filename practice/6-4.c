#include<stdio.h>

int main(){
    float a, b, c;
    printf("Nhap vao 3 canh a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if((a  + b) > c && (b + c) > a && (a + c) > b){
        printf("a, b, c la 3 canh cua mot tam giac\n");
    }
    else printf("a, b, c khong la 3 canh cua mot tam giac\n");
    return 0;
}