#include<stdio.h>
#include<string.h>

int main(){
    char ch;
    int n, sum = 0;
    scanf("%d",&n);
    if(n < 10 || n > 100){
        printf("Nhap sai.\n");
        printf("Nhap lai du lieu: ");
        scanf("%d", &n);

    }
    int i = 1;
    while(i <= n){
        sum += i;
        i++;
    }
    printf("Tong cua n chu so la: %d\n", sum);
    return 0;
}