#include "Student.h"

void Student::createDataStu() {
	fullName=data::getFullName();
	gpa = data::getGpa();
	phoneNumber = data::getPhoneNumber();
	address = data::getAddress();
	dob = data::getDob();
	id = data::getId(dob.getYear());
	email = data::getEmail(id);
}
void Student::output() {
	cout << "Student: " << endl;
	cout <<"ID: "<< id << endl;
	cout <<"FullName: "<< fullName << endl;
	cout <<"DOB: "<< dob;
	cout <<"GPA: "<< gpa << endl;
	cout <<"Telephone: "<< phoneNumber << endl;
	cout <<"Email: "<< email << endl;
	cout <<"Address: "<< address << endl;
	cout << endl;
}

void Student::input() {
	string temp;
	getline(cin, temp);
	getline(cin, temp);
	id = temp.substr(temp.find(" ") + 1, temp.length());
	getline(cin, temp);
	fullName = temp.substr(temp.find(" ") + 1, temp.length());
	cin >> temp;
	int d; char dauXoet;
	cin >> d;
	dob.setDay(d);
	cin >> dauXoet;
	cin >> d;
	dob.setMonth(d);
	cin >> dauXoet;
	cin >> d;
	dob.setYear(d);
	cin >> temp;
	cin >> gpa;
	getline(cin, temp);
	getline(cin, temp);
	phoneNumber = temp.substr(temp.find(" ") + 1, temp.length());
	getline(cin, temp);
	email = temp.substr(temp.find(" ") + 1, temp.length());
	getline(cin, temp);
	address = temp.substr(temp.find(" ") + 1, temp.length());

}

float Student::getGpa() {
	return gpa;
}
