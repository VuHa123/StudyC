#include<stdio.h>
#include<string.h>

void Mahoa(char s[], int k){
    for (int i = 0; i < strlen(s); i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') {
            s[i] = (ch - 'A' + k) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            s[i] = (ch - 'a' + k) % 26 + 'a';
        }
    }
}

void Giaima(char s[], int k){
    Mahoa(s, 26-k);
}

int main(){
    char a[100];
    int k;
    printf("Nhap vao xau ky tu: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) -  1] = '\0';
    printf("Nhap vao so buoc nhay: ");
    scanf("%d", &k);
    Mahoa(a, k);
    printf("Xau sau khi ma hoa: %s\n", a);
    Giaima(a, k);
    printf("Xau ky tu sau khi gia ma: %s", a);
}