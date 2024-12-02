#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}


int isValidDate(int day, int month, int year) {
    // Ki?m tra tháng h?p l? (1 - 12)
    if (month < 1 || month > 12) {
        return 0;
    }

    int daysInMonth;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if (isLeapYear(year)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
            break;
    }

    if (day < 1 || day > daysInMonth) {
        return 0;
    }

    return 1; // Ngày h?p l?
}

int main() {

    int day, month, year;

    printf("Nhap vao ngay: ");
    scanf("%d", &day);
    printf("Nhap vao thang: ");
    scanf("%d", &month);
    printf("Nhap vao nam: ");
    scanf("%d", &year);


    if (isValidDate(day, month, year)) {
        printf("Ngay thang nam ban nhap la hop le.\n");
    } else {
        printf("Ngay thang nam ban nhap khong hop le.\n");
    }

    return 0;
}

