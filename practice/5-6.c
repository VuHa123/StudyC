#include<stdio.h>
int main(){
    float a, b, c, delta, x1, x2;
    printf("Nhap vao he so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b*b - 4*a*c;
    printf("Gia tri cua delta la: %.2f\n", delta);
    if(delta > 0){
        printf("Phuong trinh co hai nghiem phan biet\n");
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
    }
    else if(delta == 0){
        printf("Phuong trinh co nghiem kep\n");
        x1 = x2 = -b / (2*a);
    }
    else{
        printf("Phuong trinh vo nghiem\n");
    }
    return 0;
}