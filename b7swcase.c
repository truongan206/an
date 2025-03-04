#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    // Chuyển đổi giá trị n thành một "bậc"
    int grade = (n < 5) ? 1 : (n < 7) ? 2 : (n < 8) ? 3 : (n < 9) ? 4 : 5;

    // Sử dụng switch-case để in ra kết quả
    switch (grade) {
        case 1:
            printf("Yếu");
            break;
        case 2:
            printf("Trung bình");
            break;
        case 3:
            printf("Khá");
            break;
        case 4:
            printf("Giỏi");
            break;
        case 5:
            printf("Xuất sắc");
            break;
        default:
            printf("Giá trị không hợp lệ");
            break;
    }

    return 0;
}
