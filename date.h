#pragma once
#include <iostream>
using namespace std;

class date
{
private:
	int day, month, year;
public:
	date() {
		day = month = 1;
		year = 2002;
	}
	void setDay(int d) {
		day = d;
	}
	void setMonth(int m) {
		month = m;
	}
	void setYear(int y) {
		year = y;
	}
	int getYear() {
		return year;
	}
	bool leapYear(); //Hàm kiểm tra xem phải năm nhuận hay không
	int daysInMonth(); //Hàm tính số ngày có trong tháng đó
	friend ostream& operator<<(ostream& os, const date& dt); //Operator<<: Xuất ngày tháng năm
	friend istream& operator>>(istream& is, date& dt); //Operator>>: Nhập ngày tháng năm

};

