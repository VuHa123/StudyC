#include<stdio.h>

int main(){
    float epsilon, giai_thua = 1;
    scanf("%f", &epsilon);
    float e = 1;
    int i = 1;
    while(1/giai_thua >= epsilon){
        e += 1/giai_thua;
        i++;
        giai_thua *= i;
    }
    printf("%.2f\n", e);
    return 0;
}