#include<stdio.h>
#include<math.h>
#define ACCURAY 0.0001
int main(){
    float x, sin_x = 0, giai_thua = 1, i = 0;
    printf("Nhap vao so x: ");
    scanf("%f", &x);
    while( 1/(2*i + 1) >= ACCURAY){
        giai_thua *= 2 * i + 1;
        sin_x += pow(-1, i) * pow(x, 2*i +1)/giai_thua;
        i++;
    }
    printf("sin(x) = %.2lf\n", sin_x);
    return 0;
}