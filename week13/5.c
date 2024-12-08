#include<stdio.h>
#include<string.h>

void Thaythe(char *a, char b, char c){
    while(*a){
        if(*a == b){
            *a = c;
        }
        a++;
    }
}

int main(){
    char a[50], b, c;
    printf("Nhap vao xau ky tu: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1] = '\0';
    printf("Nhap vao ky tu can tim: ");
    scanf("%c", &b);
    printf("Nhap vao ky tu muon thay the: ");
    scanf(" %c", &c);
    Thaythe(a, b, c);
    printf("Xau sau khi thay the: %s", a);
    return 0;

}