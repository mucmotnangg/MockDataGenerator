#pragma once
#include "Student.h"

class Students
{
private:
	vector<Student> list;
public:
	//Generate randomly a number n in the range of [5, 10]
	int setNumAdd();
	//Add the students in the vector from file "students.txt"
	void Read();
	//Generate randomly n Students and add to the previous vector

	void AddNStudentToList();
	//Overwrite and save and the students in the current vector back to the file "students.txt"
	void SaveToFile();
	//Print out the average GPA of all students
	float avgGpa();
	//Print out all the students that have a GPA greater than the average GPA
	void greaterAvgGpa();


};

