#include<stdio.h>

int main() {
    char c;
    int i;
    float f;
    double d;

    // Nhập dữ liệu từ bàn phím
    printf("Nhap vao mot ky tu (char): ");
    fflush(stdin); scanf(" %c", &c);

    printf("Nhap vao mot so nguyen (int): ");
    fflush(stdin); scanf("%d", &i);

    printf("Nhap vao mot so thuc (float): ");
    fflush(stdin); scanf("%f", &f);

    printf("Nhap vao mot so thuc (double): ");
    fflush(stdin); scanf("%lf", &d); // %lf dùng cho double

    // In ra các giá trị đã nhập
    printf("\nGia tri vua nhap:\n");
    printf("Ky tu (char): %c\n", c);
    printf("So nguyen (int): %d\n", i);
    printf("So thuc (float): %.2f\n", f); // In float với 2 chữ số thập phân
    printf("So thuc (double): %.2lf\n", d); // In double với 2 chữ số thập phân

    return 0;
}