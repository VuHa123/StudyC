#include<stdio.h>

int main(){
    int n;
    printf("Nhap vao so dong: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        //In ra dau *
        for(int j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}