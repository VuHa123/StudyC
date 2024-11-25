#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    printf("- So vua nhap: %d\n", a);
    printf("- Tuong ung: \\%d%%\\\"%d%%\\'%d%%'\n", a, a, a);
    return 0;
}