#include<stdio.h>

int main()
{
    int n;
    float amount_paid;
    printf("Nhap vao so dien: ");
    scanf("%d", &n);
    if(n>=1 & n <= 50){
        amount_paid = 500 * n;
    }
    else if (n > 50 & n <=100)
    {
        amount_paid = 1000 * n;
    }
    else if (n>100 & n<=150)
    {
        amount_paid = 1200 * n;
    }
    else if (n>150 & n<=200){
        amount_paid = 1600 * n;
    }

    //Xuat gia dien
    printf("So dien tieu thu trong thang la: %d\n", n);
    printf("So tien phai tra la: %.2f", amount_paid);
    return 0;
}