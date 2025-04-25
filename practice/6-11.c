#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand((unsigned)time(NULL));
    int a, b, c, random_num[20], match_count = 0;
    printf("Nhap vao con so cua ban: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a < 0 || a > 9 || b < 0 || b > 9 || c < 0 || c > 9){
        printf("Nhap sai. Chuan bi thoat khoi chuong trinh!\n");
        return 1;
    }
    for(int i = 0; i < 3; i++){
        random_num[i] = rand() % 10;
        printf("So giai thuong thu %d: %d\n", i + 1, random_num[i]);
    }
    printf("\n");
    //Xac dinh ket qua
    for(int i = 0; i < 3; i++){
        if(a == random_num[i] || b == random_num[i] || c == random_num[i]){
            match_count++;
        }
    }
    if(match_count == 1) printf("Nguoi dung dat giai Khuyen khich.\n");
    else if(match_count == 2) printf("Nguoi dung dat giai Nhat.\n");
    else if(match_count == 3) printf("Nguoi dung dat giai Dac biet.\n");
    return 0;

}