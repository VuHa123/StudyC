#include<stdio.h>
#include<math.h>
#define ACCURACY 0.0001
double Sopi(double epsilon){
    double pi = 0, i = 0;
    while(1/(2*i +1) > epsilon){
        pi += 4/(2*i + 1) * pow(-1, i);
        i++;
    }
    printf("Gia tri cua pi la: %.6lf\n", pi);
    return pi;
}

double Soe(double epsilon){
    double e = 1, n = 1, giaithua = 1;
    do{
        giaithua *= n;
        e = e + 1/(giaithua);
        n++;
    }
    while(1/giaithua >= epsilon);
    printf("Gia tri cua so e la: %.6f\n", e);
    return e;
}

float Sin_x(float x){
    float sin_x = 0, giai_thua = 1, i = 0;
    while( 1/(2*i + 1) >= ACCURACY){
        giai_thua *= 2 * i + 1;
        sin_x += pow(-1, i) * pow(x, 2*i +1)/giai_thua;
        i++;
    }
    printf("Gia tri cua sin(x) la: %.2f\n", sin_x);
    return sin_x;
}

int tieptuc() {
    char tiep;
    printf("Ban co muon tiep tuc chuong trinh? (y/n): ");
    scanf(" %c", &tiep); // Lưu ý khoảng trắng trước %c để loại bỏ ký tự '\n'
    return (tiep == 'y' || tiep == 'Y');
}

int main(){
    double epsilon;
    printf("Nhap gia tri cua epsilon: ");
    scanf(" %lf", &epsilon);
    float x;
    int choice;
    printf("Nhap gia tri cua x: ");
    scanf(" %f", &x);
    //IN chuong trinh
    printf("CHUONG TRINH TINH\n");
    printf("1- So pi\n");
    printf("2- So e\n");
    printf("3- Tinh sin(x)\n");
    printf("An phim khac: Thoat\n");
    printf("Moi ban lua chon chuong trinh: ");
    do{
        scanf(" %d", &choice);
        switch (choice){
            case 1:
                Sopi(epsilon);
                break;
            case 2:
                Soe(epsilon);
                break;
            case 3:
                Sin_x(x);
                break;
            default:
                printf("Chuong trinh ket thuc\n");
                return 0;
        }
    }while(tieptuc());
    return 0;

}