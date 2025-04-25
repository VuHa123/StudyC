#include<stdio.h>
#include<string.h>

//Viết chương trình con truyền vào hai xâu kí tự a, b. Nếu b là xâu con của a thì ta chuyển xâu con đó ở a thành các dấu ‘-‘ (b có bao nhiêu kí tự thì tương ứng với bấy nhiêu dấu ‘-‘).
void String( char *a, char *b){
    char * pos = strstr(a, b);
    while (pos != NULL){
        memset(pos, '-', strlen(b));
        pos = strstr(pos + strlen(b), b);
    }
}
//Cách 2

void String2( char *a, char *b){
    char *p, *q;
    p = strstr(a, b);
    while(*a = '\0'){
        q = b;
        *p = '-';
        p++, q++;
    }
    p = strstr(p, b);
}
void Delete(char *a){
    int i = 0, j = 0;
    while (a[i] != '\0'){
        if(a[i] != '-'){
            a[j] = a[i];
            j++;
        }
        i++;
    }
    a[j]= '\0';
}


int main(){
    char a[100], b[100];
    printf("Nhap xau a: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) -1] = '\0';
    printf("Nhap xau b: ");
    fgets(b, sizeof(b), stdin);
    b[strlen(b) -1] = '\0';
    printf("Xau thu nhat: %s", a);
    printf("\nXau thu hai: %s\n", b);
    String(a, b);
    printf("Xau a sau khi chuyen doi: %s\n", a);
    Delete(a);
    printf("khong biet\n");
    printf("Xau a sau khi xoa cac ky tu trong xau b: %s\n", a);
    return 0;
}