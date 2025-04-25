#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    printf("Nhap vao he so cua phuong trinh bac 2: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0){
        if (b == 0){
            if (c == 0){
                printf("Phuong trinh co vo so nghiem.");
            }
            else printf("Phuong trinh vo nghiem.");
        }
        else {
            printf("Phuong trinh co nghiem  duy nhat.\n x = %f\n", c/b);
        }
    }
    else {
        float delta = b*b - 4*a*c;
        if (delta < 0){
            printf("Phuong trinh vo nghiem.");
        }
        else if (delta == 0){
            printf("Phuong trinh co nghiem kep: %f", -b/(2*a));
        }
        else{
            printf("Phuong trinh co 2 nghiem phan biet: \n");
            printf("x1 = %f\n", (-b + sqrt(delta))/(2*a));
            printf("x2 = %f\n", (-b - sqrt(delta))/(2*a));
        }
    }
    return 0;
}