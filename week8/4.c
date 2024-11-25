#include<stdio.h>
#include<math.h>

int main(){
    double epsilon, pi = 0;
    int i = 0;
    printf("Nhap vao so epsilon: ");
    scanf("%lf", &epsilon);
    while(1/(2*i +1) > epsilon){
        pi += 4/(2*i + 1) * pow(-1, i);
        i++;
    }
    printf("Gia tri cua pi la: %.6f\n", pi);
    return 0;
}