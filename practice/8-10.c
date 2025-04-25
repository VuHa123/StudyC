#include<stdio.h>
#include<math.h>
#define EPSILON 0.001

float Giaithua(float i){
    if(i==1) return 1;
    return i*Giaithua(i-1);
}

int main(){
    int cal;
    char end;
    printf("CHUONG TRINH TINH\n");
    printf("1- So pi\n");
    printf("2- So e\n");
    printf("3- Sin(x)\n");
    printf("An pham khac: Thoat\n");
    do{
        printf("Moi ban lua chon chuong trinh: ");
        scanf("%d", &cal);
        printf("Ban da chon chuong trinh %d\n", cal);
        switch(cal){
            case 1: 
                float pi = 0;
                float i = 0;
                do{
                    pi += 4 * (pow(-1, i) * 1/(2*i + 1));
                    i++;
                }while(1/(2*i + 1) > EPSILON);
                printf("So pi la: %.4f\n", pi);
                break;
            case 2:
                float j = 0;
                float e = 1, giaithua = 1;
                do{
                    e += 1/giaithua;
                    j++;
                    giaithua *= j;
                }while((1/giaithua) > EPSILON);
                printf("So e la: %f\n", e);
                break;
            case 3:
                int x;
                float sin = 0;
                printf("Nhap vao gia tri x: ");
                scanf("%d", &x);
                float k = 0;
                do{
                    sin += (pow(-1, k) * pow(x, 2 * k + 1) / Giaithua(2*k + 1));
                    k++;
                }while(pow(x, 2 * k + 1) / Giaithua(k) > EPSILON);
                printf("Sin(x) la: %f\n", sin);
                break;
            default: return 0;
        }
        printf("Ban co muon tiep tuc khong? (y/n): ");
        scanf(" %c", &end);
        switch(end){
            case 'y': break;
            case 'Y': break;
            default: return 0;
        }
    }while(1);
}