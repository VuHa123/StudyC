#include<stdio.h>

int main(){
    int tram, chuc, dvi, count = 0;
    for(int i = 0; i < 1000; i++){
        tram = i / 100;
        chuc = (i % 100) / 10;
        dvi = i % 10;
        if(((tram + dvi) == chuc) && (i % 3 == 0)){
            printf("%d ", i);
            count++;
            if(count % 10 == 0) printf("\n"); 
        }
    }

    return 0;
}