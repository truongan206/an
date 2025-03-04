#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    if (n < 5) {
        printf("Yếu");
    } else if (n < 7) {
        printf("Trung bình");
    } else if (n < 8) {
        printf("Khá");
    } else if (n < 9) {
        printf("Giỏi");
    } else {
        printf("Xuất sắc");
    }

    return 0;
}
