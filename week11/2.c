#include<stdio.h>

void rotate(int *a, int *b, int *c){ //vì mình truyền vào là địa chỉ của biến a, b, c nên lúc này *a được hiểu là *(&a) tức là giá trị của a
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main(){
    int a, b, c;
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Truoc khi rotate: a = %d, b = %d, c = %d", a, b, c);
    rotate(&a, &b, &c);
    printf("\nSau khi rotate: a = %d, b = %d, c = %d", a, b, c);
    return 0;
}