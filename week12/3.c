//Viết hàm đảo ngược một mảng sử dụng 2 cách: dùng chỉ số và dùng con trỏ.
#include<stdio.h>
#include<stdlib.h>

//Dung chi so
void reverseArray(int *a, int n){
    int left = 0;
    int right = n -1;
    while (left < right){
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }
}

//Dung con tro
void reverseArrayPointer(int *a, int n){
    int *p1 = a; // con trỏ bắt đầu
    int *p2 = a + n - 1; // con trỏ kết thúc
    while (p1 < p2){
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}

void Nhapmang(int *a, int n){
    for(int i = 0; i < n; i++){
        printf("Nhap vao phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

void Xuatmang(int *a, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int* a = (int*)malloc(n*sizeof(int));
    Nhapmang(a, n);
    printf("Mang sau khi dao nguoc la(su dung chi so): ");
    reverseArray(a, n);
    Xuatmang(a, n);
    printf("\n");
    Nhapmang(a, n);
    printf("Mang sau khi dao nguoc la(su dung con tro): ");
    reverseArrayPointer(a, n);
    Xuatmang(a, n);
    free(a);
    return 0;
}