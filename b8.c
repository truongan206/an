#include <stdio.h>
#include <math.h>

int main() {
    unsigned int a, b, c;
    printf("Vui lòng nhập số đo 3 cạnh: ");
    scanf("%u %u %u", &a, &b ,&c);
    
    // Kiểm tra xem có phải là tam giác hợp lệ không
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Không hề có tam giác nào có số đo trên, vui lòng nhập lại.\n");
        return 1;
    }
    // Kiểm tra loại tam giác
    if (a == b && b == c) {
        printf("Tam giác này là tam giác đều.\n");
    }
    else if (a == b || a == c || b == c) {
        printf("Tam giác này là tam giác cân.\n");
    }
    else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("Tam giác này là tam giác vuông.\n");
    }
    else {
        printf("Tam giác này là tam giác thường.\n");
    }
  // Tính chu vi
    unsigned int P = a + b + c;
    printf("Chu vi của tam giác là: %u\n", P);

    // Tính nửa chu vi
    double s = (a + b + c) / 2.0;

    // Tính diện tích theo công thức Heron
    double S = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Diện tích của tam giác là: %.2f\n", S);
    return 0;
}
