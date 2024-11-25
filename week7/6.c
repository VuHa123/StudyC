#include<stdio.h>

int main(){
    int n;
    int giai_thua = 1;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        giai_thua *= i;
    }
    printf("%d\n", giai_thua);
    return 0;
}