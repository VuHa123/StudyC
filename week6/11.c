#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int user_num[3];
    int random_num[3];
    int match_count = 0;
    for(int i = 0; i < 3; i++){
        if(scanf("%d", &user_num[i]) < 0 || user_num[i] > 9){
            printf("So vua nhap khong hop le!");
            return 1;
        }
    }
    //Khoi tao so ngau nhien
    srand((unsigned)time(NULL));
    //Tao 3 so ngau nhien
    for(int i = 0; i < 3; i++){
        random_num[i] = rand() % 10;
        printf("%d ", random_num[i]);
    }
    printf("\n");
    //Kiem tra so ngau nhien
    for(int i = 0; i < 3; i++){
        for(int j; j < 3; j++){
            if(user_num[i] == random_num[j]){
                match_count++;
                break;
            }
        }
    }
    // Xác định kết quả
    if (match_count == 3) {
        printf("Chuc mung! Ban dat giai Dac biet!\n");
    } else if (match_count == 2) {
        printf("Chuc mung! Ban dat giai Nhat!\n");
    } else if (match_count == 1) {
        printf("Chuc mung! Ban dat giai Khuyen khich!\n");
    } else {
        printf("Rat tiec, ban khong dat giai.\n");
    }

    return 0;
}