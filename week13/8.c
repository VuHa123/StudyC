#include <stdio.h>
#include <string.h>
#include <ctype.h>

void thong_ke_tan_suat(const char* s) {
    int freq[256] = {0};  // Mảng lưu tần suất các ký tự

    for (int i = 0; s[i] != '\0'; i++) {
        if (isalnum(s[i])) {  // Kiểm tra nếu là chữ cái hoặc chữ số
            freq[(unsigned char)s[i]]++;
        }
    }

    // In kết quả thống kê
    printf("Tần suất xuất hiện của các ký tự:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
}

int main() {
    char s[1000];

    printf("Nhập đoạn văn bản: ");
    fgets(s, sizeof(s), stdin);

    thong_ke_tan_suat(s);

    return 0;
}
