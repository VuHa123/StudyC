#include<stdio.h>
#include<string.h>
#define VAT 0.05
int main(){
    char title[30], ISBN[20];
    int quantity;
    double price, total_price;
    printf("Nhap ten sach: ");
    fgets(title, sizeof(title), stdin);
    title[strlen(title) - 1] = '\0';
    printf("Nhap ISBN: ");
    fgets(ISBN, sizeof(ISBN), stdin);
    ISBN[strlen(ISBN) - 1] = '\0';
    printf("Nhap gia sach: ");
    fflush(stdin); scanf("%lf", &price);
    printf("Nhap so luong mua: ");
    fflush(stdin); scanf("%d", &quantity);
    total_price = price * quantity * VAT;
    //Bang gia
    printf("\n\nBK Bookseller\n\n");
    printf("%s %10s %18s %10s %10s\n", "Qty", "ISBN", "Title", "Price", "Total");
    printf("--------------------------------------------------------------------------\n\n");
    printf("%3d %10s %18s %10.2f %10.2f\n", quantity, ISBN, title, price, total_price);
    printf("VAT: 5%%\n");
    printf("You pay: 10%lf", total_price);
    return 0;
}