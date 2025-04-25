#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Sosanh(char *r, char *l){
    while(l<r){
        if(*l != *r) return 0; 
        l++;
        r--;
    }
    return 1;
}
int main(){
    char *a = (char*)malloc(100 * sizeof(int));
    char *l, *r;
    printf("Nhap vao mot chuoi: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1] = '\0';
    l = &a[0];
    r = &a[strlen(a)-1];
    if(Sosanh(r, l)) printf("Chuoi la so palindrome\n");
    else printf("Chuoi khong la so palindrome\n");
    free(a);
    return 0;
}