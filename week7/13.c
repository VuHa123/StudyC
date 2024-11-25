#include<stdio.h>

int main(){
    int n = 100, x, y, z;
    for (x = 0; x <= 20; x++) {
        for (y = 0; y <= 34; y++) {
            z = 100 - x - y;

            // Check if the equation holds
            if (5 * x + 3 * y + z / 3.0 == 100) {
                printf("Số trâu đứng: %d\n", x);
                printf("Số trâu nằm: %d\n", y);
                printf("Số trâu già: %d\n", z);
                printf("Trâu đứng ăn: %d bó\n", 5 * x);
                printf("Trâu nằm ăn: %d bó\n", 3 * y);
                printf("Trâu già ăn: %.1f bó\n", z / 3.0);
                printf("\n\n");
            }
        }
    }

    return 0;
}