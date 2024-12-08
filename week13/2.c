#include<stdio.h>
#include<string.h>

void BoKhoangTrang(char *s){
    char *p = s;
    int i;
    do{
        p = strchr(p,' ')+1;
        while(*p == ' '){
            for(i=0;i<strlen(p)-1;i++){
                p[i] = p[i+1];
            }
            p[i] = '\0';
        }
    }while(strchr(p,' ')!=NULL);
}
int main(){
    char s[20];
    printf("Nhap vao xau ky tu: ");
    fgets(s, sizeof(s), stdin);
    BoKhoangTrang(s);
    printf("Xau sau khi xoa khoang trang: %s\n", s);
    return 0;
}