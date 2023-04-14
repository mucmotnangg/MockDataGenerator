#include "date.h"

bool date::leapYear() {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    // Năm Nhuận là năm chia hết cho 4(với các năm còn lại khác năm tròn thế kỷ) và năm chia hết cho 400(đối với các năm tròn thế kỷ)
}
int date::daysInMonth() {
    switch (month) {
        //Trường hợp các tháng có 31 ngày
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    {
        return 31;
        break;
    }
    case 2:
    {
        if (leapYear())
        {
            return 29; //Năm Nhuận tháng 2 có 29 ngày
        }
        return 28;
        break;
    }
    case 4:case 6:case 9:case 11:
    {
        return 30;
    }
    }
}
istream& operator>>(istream& is, date& dt) {
    is >> dt.day >> dt.month >> dt.year;
    return is;
}
ostream& operator<<(ostream& os, const date& dt) {
    os << dt.day << "/" << dt.month << "/" << dt.year<< endl;
    return os;
}
