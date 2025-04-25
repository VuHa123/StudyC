#include<stdio.h>
void Tram(int hangtram){
    switch(hangtram){
        case 1: printf("Mot tram "); break;
        case 2: printf("Hai tram "); break;
        case 3: printf("Ba tram "); break;
        case 4: printf("Bon tram "); break;
        case 5: printf("Nam tram "); break;
        case 6: printf("Sau tram "); break;
        case 7: printf("Bay tram "); break;
        case 8: printf("Tam tram "); break;
        case 9: printf("Chin tram "); break;
    }
}

void Chuc(int hangchuc){
    switch(hangchuc){
        case 0: printf("linh "); break;
        case 1: printf("muoi "); break;
        case 2: printf("hai muoi "); break;
        case 3: printf("ba muoi "); break;
        case 4: printf("bon muoi "); break;
        case 5: printf("nam muoi "); break;
        case 6: printf("sau muoi "); break;
        case 7: printf("bay muoi "); break;
        case 8: printf("tam muoi "); break;
        case 9: printf("chin muoi "); break;
    }
}

void Donvi(int hangdvi){
    switch(hangdvi){
        case 1: printf("mot\n"); break;
        case 2: printf("hai\n"); break;
        case 3: printf("ba\n"); break;
        case 4: printf("bon\n"); break;
        case 5: printf("nam\n"); break;
        case 6: printf("sau\n"); break;
        case 7: printf("bay\n"); break;
        case 8: printf("tam\n"); break;
        case 9: printf("chin\n"); break;
    }
}

int main(){
    int n, hangtram, hangchuc, hangdvi;
    char c;
    printf("Nhap vao so nguyen duong: ");
    scanf("%3d", &n);
    hangtram = n/100;
    hangchuc = (n%100)/10;
    hangdvi = (n%100)%10;
    if(hangdvi == 0){
        Tram(hangtram);
    }
    else{
        Tram(hangtram);
        Chuc(hangchuc);
        Donvi(hangdvi);
    }    
    return 0;

}