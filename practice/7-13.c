#include<stdio.h>
int main(){
    int n = 100, x, y, z;
    for(x = 1; x <= 20; x++){
        for(y = 1; y <= 33; y++){
            z = 100 - x -y;
            if(5*x + 3*y + z/3.0 == 100){
                printf("So trau dung: %d\n", x);
                printf("So trau nam: %d\n", y);
                printf("So trau gia: %d\n", z);
                printf("Trau dung an %d bo co\n", 5*x);
                printf("Trau nam an %d bo co\n", 3*y);
                printf("Trau gia an %d bo co\n", z/3.0);
                printf("\n");
            }
        }
    }
    return 0;
}