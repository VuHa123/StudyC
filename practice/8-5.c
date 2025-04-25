#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001
float Giaithua(float i){
    if(i==1) return 1;
    return i*Giaithua(i-1);
}
int main(){
    int x;
    float sin = 0;
    printf("Nhap vao gia tri x: ");
    scanf("%d", &x);
    float i = 0;
    do{
        sin += (pow(-1, i) * pow(x, 2 * i + 1) / Giaithua(2*i + 1));
        i++;
    }while(pow(x, 2 * i + 1) / Giaithua(i) > EPSILON);
    printf("Ket qua la: %f", sin);
    return 0;
}