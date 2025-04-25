#include<stdio.h>
#include<math.h>
int main(){
    int n, isPrime;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if(n == 2 || n ==3){
        printf("%d la so nguyen to\n", n);
    }
    if(n <=1) printf("%d khong phai la so nguyen to\n", n);
    else{
        for(int i = 2; i < sqrt(n); i++){
            if(n % i == 0) isPrime = 0; break;
        }
    }
    if(isPrime == 0) printf("%d khong phai la so nguyen to\n", n);
    else printf("%d la so nguyen to\n", n);
    return 0;
}