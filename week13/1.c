#include<stdio.h>
#include<string.h>

//Ham dem khoang trang 
int DemKhoangTrang(char *s){
    int dem = 0;
    char *p = s;
    while(strchr(p, ' ') != NULL){
        p = strchr(p, ' ') + 1;
        dem++;
    }
    return dem;
}

int main(){
    char s[20];
    printf("Nhap vao chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strlen(s) -1] = '\0';
    printf("So khoang trang cua xau ky tu la: %d\n", DemKhoangTrang(s));
    return 0;
}