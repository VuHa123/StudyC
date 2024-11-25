#include<stdio.h>

void main(){
    int year, age;
    printf("Enter nam: ");
    scanf("%d",&year);
    age = 2024 - year;
    if(age > 0 && age < 6){
        printf("Ban la tre em\n");
    }
    if(age >= 6 && age < 11){
        printf("Ban la hoc sinh cap 1\n");
    }
    if(age >= 11 && age < 15){
        printf("Ban la hoc sinh cap 2\n");
    }
    if(age >=15 && age < 18){
        printf("Ban la hoc sinh cap 3\n");
    }
    if(age >= 18 && age < 40){
        printf("Ban la thanh nien\n");
    }
    if(age >= 40 && age < 60){
        printf("Ban la trung nien\n");
    }
    if(age >= 60){
        printf("Ban la nguoi gia\n");
    }
}