#include<stdio.h>
#include<string.h>
#define VAT 0.05

int main(){
    char ten[20], ISBN[10], ch;
    float price, total_book;
    int quantity;
    printf("Nhap vao ten sach: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strlen(ten) - 1] = '\0';
    printf("Nhap vao gia sach: ");
    scanf("%f", &price);
    printf("Nhap vao so luong sach: ");
    scanf("%d", &quantity);
    scanf("%c", &ch);
    printf("Nhap vao ISBN sach: ");
    fgets(ISBN, sizeof(ISBN), stdin);
    ISBN[strlen(ISBN) - 1] = '\0';
    total_book = price * quantity;
    printf("\nBK Bookseller\n\n");
    printf("%7s%15s%20s%10s%10s\n", "Qty", "ISBN", "Title", "Price", "Total\n");
    printf("-------------------------------------------\n");
    printf("%7d%15s%20s%10.2f%10.2f\n", quantity, ISBN, ten, price, total_book);
    printf("VAT: %f\n", VAT);
    printf("You pay: %.2f", total_book * (1 + VAT));
    return 0;
}