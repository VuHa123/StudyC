#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char c[5], ch;
    float f;
    double  d;
    printf("Nhap vao lan luot cac kieu du lieu: ");
    scanf("%d", &i);
    scanf("%c", &ch);
    fgets(c, sizeof(c), stdin);
    c[strlen(c) - 1] = '\0';
    scanf("%f", &f);
    scanf("%lf", &d);
    printf("Kieu int: %d\n", i);
    printf("Kieu char: %s\n", c);
    printf("Kieu float: %.2f\n", f);
    printf("Kieu double: %.2lf\n", d);
    return 0;
}