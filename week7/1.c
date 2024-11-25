#include<stdio.h>

int main(){
    for(int i = 1000; i > 0; i--){
        int tram = i / 100;
        int chuc = (i/ 10) % 10;
        int donvi = i % 10;
        int count;
        if((donvi + tram == chuc) && (i % 3 == 0) ){
            printf("%d ", i);
            count++;
            if(count == 10){
                printf("\n");
            }
        }
    }
    return 0;
}