#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, delta;
    printf("Nhap vao he so a: ");
    scanf("%f", &a);
    printf("Nhap vao he so b: ");
    scanf("%f", &b);
    printf("Nhap vao he so c: ");
    scanf("%f", &c);

    //Giai phuong trinh
    if(a==0){
        if(b==0){
            if(c==0){
                printf("Phuong trinh co vo so nghiem\n");
            }else printf("Phuong trinh vo nghiem\n");
        }else{
            printf("Phuong trinh co nghiem duy nhat x = %f\n", -c/b);
        }
    }else{
        delta = b * b - 4 * a *c;
        printf("delta = %.2f\n", delta);
        if(delta > 0){
            printf("Phuong trinh co 2 nghiem phan biet\n");
            printf("\nNghiem 1: x1 = %.2f\n", (-b + sqrt(delta))/(2*a));
            printf("\nNghiem 2: x2 = %.2f\n", (-b - sqrt(delta))/(2*a));
        }else if(delta == 0){
            printf("Phuong trinh co nghiem kep\n");
            printf("Ngiem kep la: %.2f\n", -b/(2 * a));
        }
    }
    return 0;
}