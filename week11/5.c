#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char s[100], *left, *right;
    bool isPalidrome = true;
    printf("Nhap vao mot chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strlen(s) - 1] = '\0';
    left = &s[0];
    right = &s[strlen(s) - 1];
    while(left < right){
        if(*left != *right){
            isPalidrome = false;
            break;
        }
        left++;
        right--;
    }
    if(isPalidrome){
        printf("%s la mot chuoi doi xung\n", s);
    }
    else{
        printf("%s khong la mot chuoi doi xung\n", s);
    }
    return 0;
}