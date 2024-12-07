#include<stdio.h>
#include<time.h>
#include<stdlib.h>

typedef struct{
    float strength;
    float agility;
    float healthy;
}Fighter;

void KhoitaoFighter(Fighter *fighter){
    fighter->strength = rand() % 101;
    fighter->agility = rand() % 101;
    fighter->healthy = rand() % 101;
}

float totalCore(Fighter fighter){
    return fighter.strength + fighter.agility + fighter.healthy;
}

//Ham tang diem
void TangDiem(Fighter *fighter, float per){
    fighter->strength += fighter->strength * per;
    fighter->agility += fighter->agility * per;
    fighter->healthy += fighter->healthy * per;
}

//Diem thuong ngau nhien
void DiemThuongNgauNhien(Fighter *fighter){
    fighter->strength += (1+(rand() % 6)/100.0);
    fighter->agility += (1 + (rand() % 6)/100.0);
    fighter->healthy += (1 + (rand() % 6)/100.0);
}
void arena(Fighter *f1, Fighter *f2){
    float total1 = totalCore(*f1);
    float total2 = totalCore(*f2);
    if(total1 > total2){
        TangDiem(f1, 0.02);
        TangDiem(f2, 0.01);
    }else{
        TangDiem(f1, 0.01);
        TangDiem(f2, 0.02);
    }
    //Diem thuong ngau nhien
    DiemThuongNgauNhien(f1);
    DiemThuongNgauNhien(f2);
}

int main(){
    srand(time(NULL));
    int n;
    printf("Nhap so lan thi dau: ");
    scanf("%d",&n);
    Fighter fighter1, fighter2, fighter3;
    KhoitaoFighter(&fighter1);
    printf("Fighter 1: %f %f %f\n",fighter1.strength, fighter1.agility, fighter1.healthy);
    KhoitaoFighter(&fighter2);
    KhoitaoFighter(&fighter3);
    for(int i = 0; i< n;i++){
        arena(&fighter1, &fighter2);
        arena(&fighter2, &fighter3);
        arena(&fighter1, &fighter3);
    }
    printf("Diem cuoi cung cua 3 fighter la: \n");
    printf("Fighter 1: %f %f %f\n",fighter1.strength, fighter1.agility, fighter1.healthy);
    printf("Fighter 2: %f %f %f\n",fighter2.strength, fighter2.agility, fighter2.healthy);
    printf("Fighter 3: %f %f %f\n",fighter3.strength, fighter3.agility, fighter3.healthy);
    return 0;
}