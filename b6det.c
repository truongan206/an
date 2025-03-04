#include <stdio.h>

int main() {
    float a1, b1, c1, a2, b2, c2;
    float x, y;

    // Nhập hệ số
    printf("Nhap he so a1, b1, c1 (a1x + b1y = c1): ");
    scanf("%f %f %f", &a1, &b1, &c1);

    printf("Nhap he so a2, b2, c2 (a2x + b2y = c2): ");
    scanf("%f %f %f", &a2, &b2, &c2);

    // Tính định thức của ma trận hệ số
    float det = a1 * b2 - a2 * b1;

    // Kiểm tra xem hệ phương trình có thể giải được không
    if (det == 0) {
        printf("He phuong trinh vo nghiem hoac vo so nghiem.\n");
    } else {
        // Giải hệ phương trình
        x = (c1 * b2 - c2 * b1) / det;
        y = (a1 * c2 - a2 * c1) / det;

        printf("Nghiem cua he phuong trinh la:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }

    return 0;
}
