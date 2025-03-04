// day-month-year
//xuất nhập ngày tháng năm
// Chương trình nhập xuẩt ngày tháng theo năm
#include <stdio.h>
#include<stdlib.h>
int main() {
    int year,month;
    while(1){
    printf("mời nhập năm: \n");
    scanf("%d",&year);
    printf("mời nhập tháng: \n");
    scanf("%d",&month);
    if (month < 1 || month > 12) {
            printf("Một năm chỉ có 12 tháng, dữ liệu không hợp lệ. Vui lòng nhập lại.\n");
            continue; 
        }
    int isLeapYear=( (year%4==0 && year%100!=0) || (year%400==0));
    
        switch(month){
        case 1:case 3: case 5: case 7: case 8: case 10:case 12:
        printf("tháng %d có 31 ngày.\n", month);
        break;
        case 2:
        if (isLeapYear){
            printf("năm này là năm nhuận và tháng có 29 ngày.\n");
        }
        else{
            printf("năm không phải là năm nhuận và tháng 2 có 28 ngày.\n");
        }
        break;
        case 4: case 6: case 9:case 11:
        printf("tháng %d có 30 ngày.\n", month);
        break;
        default:
        printf("một năm chỉ có 12 tháng, dữ liệu không hợp lệ.\n");
        }
    }
    return 0;
}
