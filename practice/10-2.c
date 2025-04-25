#include<stdio.h>

void Nhap(int n, int a[]){
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(int n, int a[]){
    for(int i = 1; i <= n; i++){
        printf("%d\n", a[i]);
    }
}
int Tong_duong(int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) sum += a[i];
    }
    return sum;
}
float Mean_am(int n, int a[]) {
    float sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            sum += a[i];
            count++;
        }
    }
    if (count == 0) return 0; // Avoid division by zero
    return sum / count;
}

int Count_0(int n, int a[]){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 0) count++;
    }
    return count;
}

void Find(int n, int a[], int x) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Vi tri cua so %d: %d\n", x, i);
            found = 1;
        }
    }
    if (!found) {
        printf("So %d khong co trong day\n", x);
    }
}

int main(){
    int n, x;
    printf("Nhap so n: ");
    scanf("%d", &n);
    int a[n];
    Nhap(n, a);
    printf("Day vua nhap\n");
    Xuat(n, a);
    int sum = Tong_duong(n, a);
    printf("Tong_duong: %d\n", sum);
    float mean = Mean_am(n, a);
    if (mean != 0) {
        printf("Trung binh cong cac so am: %.2f\n", mean);
    } else {
        printf("Khong co so am trong day.\n");
    }
    printf("So luong so 0: %d\n", Count_0(n, a));
    printf("Nhap gia tri muon tim: ");
    scanf("%d", &x);
    Find(n, a, x);
    return 0;
}