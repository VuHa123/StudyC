#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float sum = 0;
    for(float i = 1; i <= n; i++){
        sum += 1/i;
    }
    printf("%.2f\n", sum);
    return 0;
}