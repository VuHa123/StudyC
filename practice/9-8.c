#include<stdio.h>
#include<math.h>
void TichPhan(float a, float b, int n){
    int i = 1;
    float delta, tp = 0, xi, f_xi;
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
}
int main(){
    float a,b, xi, f_xi;
    int n = 100;
    printf("Nhap vao so a: ");
    scanf("%f",&a);
    printf("Nhap vao so b: ");
    scanf("%f",&b);
    TichPhan(a, b, n);
    return 0;
}