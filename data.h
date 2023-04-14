#pragma once
#include <iostream>
#include <string>
#include <random>
#include "date.h"
using namespace std;

class data
{
public:
	int random(int , int );
	string getFullName();
	float getGpa();
	string getPhoneNumber(); 
	string getMale();
	string getAddress();
	date getDob();
	string getId(int);
	string getEmail(string);
};

