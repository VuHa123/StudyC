#include <stdio.h>
#include <string.h>

// Hàm dịch trái
void dich_trai(char* word) {
    int len = strlen(word);
    char first = word[0];
    for (int i = 0; i < len - 1; i++) {
        word[i] = word[i + 1];
    }
    word[len - 1] = first;
}

// Hàm dịch phải
void dich_phai(char* word) {
    int len = strlen(word);
    char last = word[len - 1];
    for (int i = len - 1; i > 0; i--) {
        word[i] = word[i - 1];
    }
    word[0] = last;
}

int main() {
    char word1[100], word2[100];
    printf("Nhap tu muon dich trai: ");
    fgets(word1, sizeof(word1), stdin);
    word1[strcspn(word1, "\n")] = 0;
    printf("Nhap tu muon dich phai: ");
    fgets(word2, sizeof(word2), stdin);
    word2[strcspn(word2, "\n")] = 0;

    dich_trai(word1);
    printf("Dịch trái: %s\n", word1); 

    dich_phai(word2);
    printf("Dịch phải: %s\n", word2); 

    return 0;
}
