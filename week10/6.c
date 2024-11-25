#include<stdio.h>

int Sosanh(int a[], int b[], int size_a, int size_b){
    if (size_a != size_b) {
    return 0;
    }

    // So sánh từng phần tử
    for (int i = 0; i < size_a; i++) {
        if (a[i] != b[i]) {
        return 0;
        }
    }

    return 1;

}

int main(){
    int n1, n2, a[n1], b[n2];

    //Nhap vao mang thu 1
    printf("Nhap so phan tu cua mang thu 1: ");
    scanf("%d", &n1);
    printf("Nhap vao mang thu nhat: ");
    for(int i = 0; i < n1; i++){
        scanf("%d", &a[i]);
    }
    //Nhap vao mang thu 2
    printf("Nhap so phan tu cua mang hai: ");
    scanf("%d", &n2);
    printf("Nhap vao mang thu hai: ");
    for(int i = 0; i < n2; i++){
        scanf("%d", &b[i]);
    }
    int result = Sosanh(a, b, n1, n2);
    if(result == 0){
        printf("2 mang khac nhau\n");
    }else{
        printf("2 mang giong nhau\n");
    }
    return 0;
}