#include<stdio.h>
#include<math.h>
int main(){
    float epsilon, pi = 0;
    printf("Nhap so epsilon: ");
    scanf("%f", &epsilon);
    float i = 0;
    do{
        pi += (pow(-1,i) * 1/(2*i+1)) * 4;
        i++;
    }while((1/(2*i+1)) > epsilon);
    printf("Ket qua: %.15f\n", pi);
    return 0;
}