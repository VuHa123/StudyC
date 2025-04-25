#include<stdio.h>

//Phan bien ptr, *ptr, &ptr
// 1. ptr:
// Đây là một con trỏ, lưu trữ địa chỉ của một biến khác.
// Ví dụ: int *ptr; khai báo một con trỏ ptr trỏ đến một biến kiểu int.
// 2. *ptr:
// Đây là toán tử dereference, dùng để truy cập giá trị của biến mà con trỏ ptr đang trỏ đến.
// Ví dụ: Nếu ptr trỏ đến biến a, thì *ptr sẽ trả về giá trị của a.
// 3. &ptr:
// Đây là toán tử lấy địa chỉ, dùng để lấy địa chỉ của chính con trỏ ptr.
// Ví dụ: &ptr sẽ trả về địa chỉ của con trỏ ptr trong bộ nhớ.
// 4. **p
// - Là một con trỏ đến con trỏ. Nó lưu trữ địa chỉ của con trỏ khác
void main() {
    int a, b;
    int *ptr;
    ptr = &a;
    printf("Giá trị của a: %d\n", a);
    printf("Địa chỉ của a: %p\n", (void*)&a);
    printf("Giá trị của con trỏ ptr (địa chỉ của a): %p\n", (void*)ptr);
    printf("Địa chỉ của con trỏ ptr: %p\n", (void*)&ptr);
}
