#include<stdio.h>
#include<string.h>

void BoKhoangTrang(char *s){
    char *p = s;
    int i = 0;
    while ((p = strchr(p, ' ')) != NULL) {
        char *q = p + 1;
        while (*q == ' ') {
            for (i = 0; i < strlen(q); i++) {
                q[i] = q[i + 1];
            }
        }
        p++;
    }
}

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
    char str[100];
    printf("Nhap vao xau ky tu: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) -1] = '\0';
    BoKhoangTrang(str);
    printf("Xau sau khi xoa khoang trang: %s\n", str);
    int nspace = DemKhoangTrang(str);
    printf("So tu trong xau ky tu %d\n", nspace + 1);
    return 0;
}