#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUM 100

int main(){
    int count[13] = {0};
    int lan1, lan2, sum;
    srand(time(NULL));

    for(int i = 0; i < NUM; i++){
        lan1 = rand() % 6 + 1;
        lan2 = rand() % 6 + 1;
        sum = lan1 + lan2;
        count[sum]++;
    }
    printf("Thong ke tong so diem trong %d lan tung xuc xac: \n", NUM);
    for(int i = 2; i <= 12; i++){
        printf("Tong %d diem: %d lan \n", i, count[i]);
    }
    return 0;
}