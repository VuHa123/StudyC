#include<stdio.h>

int main(){
    int a, b, c;
    printf("Nhap vao 3 so thu a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c){
        printf("So lon nhat la: %d", a);
    }
    else if (b > a && b > c){
        printf("So lon nhat la: %d", b);
    }
    else{
        printf("So lon nhat la: %d", c);
    }
    return 0; 
}