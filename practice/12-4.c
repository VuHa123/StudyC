#include<stdio.h>
#include<time.h>
#include<stdlib.h>

typedef struct{
    float strength;
    float agility;
    float healthy;
}Fighter;

void KhoitaoFigter(Fighter *fig){
    fig->strength = rand() % 101;
    fig->agility = rand() % 101;
    fig->healthy = rand() % 101;
}

float TotalSore(Fighter fig){
    return fig.strength + fig.agility + fig.healthy;
}

//Ham tang diem
void Increase(Fighter *fig, int per){
    fig->strength += fig->strength * per;
    fig->agility += fig->agility * per;
    fig->healthy += fig->healthy * per;
}

//Diem thuong ngau nhien
void DiemThuongNgauNhien(Fighter *fig){
    fig->strength += (rand() % 6 +1)/100.0;
    fig->agility += (rand() % 6 +1)/100.0;
    fig->healthy += (rand() % 6 +1)/100.0;
}

void Arena(Fighter *f1, Fighter *f2){
    float total1 = TotalSore(*f1);
    float total2 = TotalSore(*f2);
    if(total1 > total2){
        Increase(f1, 0.02);
        Increase(f2, 0.01);
    }else(
        Increase(f1, 0.01);
        Increase(f2, 0.02);
    )
    DiemThuongNgauNhien(f1);
    DiemThuongNgauNhien(f2);
}

int main(){
    srand((unsigned)time(NULL));
    int n;
    printf("Nhap vao so lan thi dau: ");
    scanf("%d", &n);
    Fighter fighter1, fighter2, fighter3;
    KhoitaoFigter(&fighter1);
    KhoitaoFigter(&fighter2);
    KhoitaoFigter(&fighter3);
    for(int i = 0; i < n; i++){
        Arena(&fighter1, &fighter2);
        Arena(&fighter2, &fighter3);
        Arena(&fighter3, &fighter1);
    }
    printf("Diem cuoi cung cua 3 fighter la: \n");
    printf("Fighter 1: %f\n", TotalSore(fighter1));
    printf("Fighter 2: %f\n", TotalSore(fighter2));
    printf("Fighter 3: %f\n", TotalSore(fighter3));
    return 0;
}