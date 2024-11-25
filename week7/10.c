#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n <= 1){
        rintf("%d Khong phai so nguyen to.\n", n);
    } else if(n == 2){
        printf("%d la so nguyen to.\n", n);
    }
    else{
    //Kiem tra so nguyen to
        for(int i = 2; i < n; i++){
            if(n%i==0){
                printf("Khong phai so nguyen to.\n");
                return 0;
            }
        }
        printf("%d la so nguyen to.\n", n);
    }
    return 0;
}