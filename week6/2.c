#include<stdio.h>

int main(){
    int a, b, max;
    scanf(" %d %d", &a, &b);
    if(a > b){
        printf("So lon nhat la: %d\n", a);
    }
    else if(b > a){
        printf("So lon nhat la: %d\n", b);
    }
}