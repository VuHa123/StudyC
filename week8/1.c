#include<stdio.h>


int main(){
    int n = 0;
    int giaithua = 1;
    // while
    // while(n < 8){
    // if(n == 0){
    // giaithua = 1;
    // }
    // else{
    // giaithua = giaithua * n;
    // }
    // n++;
    // }
    //do.while
    int n1 = 0;
    int giaithua1 = 1;
    do{
        if(n1 == 0){
            giaithua1 = 1;
        }
        else
        {
            giaithua1 = giaithua1 * n1;
        }
        n1++;
    }while(n1 < 8);
    printf("%d\n", giaithua1);
    return 0;
}