#include<stdio.h>

int main(){
    int a,b,c;
    int *p, *q, *r;
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%d %d %d",&a,&b,&c);
    p = &a;
    q = &b;
    r = &c;
    printf("Gia tri cua a, b, c la: %d %d %d\n", a, b, c);
    printf("p = %p, q = %p, r = %p\n", (void*)p, (void*)q, (void*)r);
    printf("Gia tri cua *p, *q, *r la: %d %d %d\n", *p, *q, *r);
    printf("\n\n");
    //Trao doi gia tri cua a, b, c
    int temp = a;
    a = b;
    b = c;
    c = temp;
    printf("Gia tri cua a, b, c sau khi trao doi gia tri: %d %d %d\n", a , b, c);
    printf("p = %p, q = %p, r = %p\n", (void*)p, (void*)q, (void*)r);
    printf("Gia tri cua *p, *q, *r sau khi x, y, z bi trao doi: %d %d %d\n", *p, *q, *r);
    printf("\n\n");
    //Trao doi gia tri cua p, q, r
    int *ptr = p;
    p = q;
    q = r;
    r = ptr;
    printf("Gia tri cua a, b, c sau khi trao doi gia tri cua p, q,r: %d %d %d\n", a , b, c);
    printf("p = %p, q = %p, r = %p\n", (void*)p, (void*)q, (void*)r);
    printf("Gia tri cua *p, *q, *r sau khi p, q, r bi trao doi: %d %d %d\n", *p, *q, *r);
    return 0;
}