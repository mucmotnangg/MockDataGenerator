#include "data.h"
int data::random(int low, int high) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(low, high);
	return dist(gen);
}

string data::getFullName() {
	string lastName[] = { "Nguyen","Ngo", "Truong", "Phan", "Tran", "Le", "Do", "Huynh", "Dang", "Ly" };
	string midName[] = { "Ngoc","Hanh","Yen","Tuyet","My","Trong",
			"Nhat","Khanh","Lam","Anh","Quynh","Huu","Van","Vinh","Quoc" };
	string firstName[] = { "Thanh","Hoa","Thuan","Dung","Nhi","Tri","Kiet","Nhan","Han","Nghia","Thuy","Nhung","Anh","Quynh","Vy" };
	int length[] = { 2, 2, 2,3,3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4,5 };
	int n = length[random(0, sizeof(length) / sizeof(length[0]))];
	string fullname;
	string space = " ";
	fullname += lastName[random(0, *(&lastName + 1) - lastName -1)];
	fullname += space;
	if (n == 3) {
		fullname += midName[random(0, *(&midName + 1) - midName - 1)];
		fullname += space;
	}
	else if (n == 4) {
		fullname += midName[random(0, *(&midName + 1) - midName - 1)];
		fullname += space;
		fullname += midName[random(0, *(&midName + 1) - midName - 1)];
		fullname += space;
	}
	else if (n == 5) {
		fullname += lastName[random(0, *(&lastName + 1) - lastName - 1)];
		fullname += space;
		fullname += midName[random(0, *(&midName + 1) - midName - 1)];
		fullname += space;
		fullname += midName[random(0, *(&midName + 1) - midName - 1)];
		fullname += space;

	}
	fullname += firstName[random(0, *(&firstName + 1) - firstName - 1)];
	return fullname;
}

float data::getGpa() {
	random_device rd;
	default_random_engine eng(rd());
	uniform_real_distribution<float> distr(4, 10);
	return roundf(distr(eng) * 100) / 100; //lam tron 2 so thap phan
}

string data::getPhoneNumber() {
	string phone = "0";
	for (int i = 1; i < 10; i++)
		phone += to_string(random(0, 9));
	return phone;
}

string data::getMale() {
	string male[] = {"Male","Female"};
	return male[random(0, 1)];
}

string data::getAddress() {
	string street[] = {"Tran Hung Dao","Phan Anh","Ham Nghi","Hoang Hoa Tham","3/2","Cong Hoa","Nguyen Van Cu",
	"Nguyen Tri Phuong","Phan Chu Trinh","Cong Quynh"};
	string district[] = {"1","2","3","4","5","6","7","8","9","10","11","12","Thu Duc","Binh Tan","Tan Binh","Phu Nhuan"};
	string ward[] = { "1","2","3","4","5","6","7","8","9","10","11","12","Binh Hung Hoa","Dong Hoa","Binh Tri Dong"};
	string city[] = {"TP. Ho Chi Minh","Thu Duc","Nha Trang","Pleiku"};
	string add;
	add += street[random(0, *(&street + 1) - street - 1)];
	add += ", Ward ";
	add += ward[random(0, *(&ward + 1) - ward - 1)];
	add += ", District ";
	add += district[random(0, *(&district + 1) - district - 1)];
	add += ", ";
	add += city[random(0, *(&city + 1) - city - 1)];
	add += " City";
	return add;
}

date data::getDob() {
	date d;
	d.setYear(random(1996, 2003));
	d.setMonth(random(1, 12));
	d.setDay(random(1, d.daysInMonth()));
	return d;
}

string data::getId(int year) {
	string Id = "";//8 ki tu
	Id += to_string(year + 18); //2 so dau la khoa = nam sinh + 18
	for (int i = 0; i < 4; i++)
		Id += to_string(random(0, 9));
	return Id;
}

string data::getEmail(string Id) {
	string mail = Id + "@student.hcmus.edu.vn";
	return mail;
}