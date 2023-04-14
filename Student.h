#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
//#include "date.h"
#include "data.h"
using namespace std;

class Student :public data
{
private:
	string id;
	string fullName;
	float gpa;
	string phoneNumber;
	date dob;
	string address;
	string email;
public:
	void input();
	void output();
	float getGpa();
	void createDataStu();
};



