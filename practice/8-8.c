#include<stdio.h>
#include<math.h>

int main(){
    float a,b, tp = 0, delta, xi, f_xi;
    int n = 100,i = 1;
    printf("Nhap vao so a: ");
    scanf("%f",&a);
    printf("Nhap vao so b: ");
    scanf("%f",&b);
    //Tinh delta
    delta = (b - a)/(n-1);
    //Tinh tp
    do{
        xi = a + (i-1)*delta;
        f_xi = sin(pow(xi, 2))/exp(xi);
        tp += f_xi*delta;
        i++;
    }
    while(i <= n);
    printf("Ket qua: %f\n",tp);
    return 0;
}