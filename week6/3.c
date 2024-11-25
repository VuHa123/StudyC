#include<stdio.h>

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if((a>b) && (a>c)){
        printf("So lon nhat trong 3 so laf: %.2f\n", a);
    }
    else if((b>a) && (b>c)){
        printf("So lon nhat trong 3 so laf: %.2f\n", b);
    }
    else{
        printf("So lon nhat trong 3 so laf: %.2f\n", c);
    }
}