#include "Students.h"
int Students::setNumAdd() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(5, 10);
	return dist(gen);
}

//Add the students in the vector from file "students.txt"
void  Students::Read() {
	freopen("Students.TXT", "r", stdin);
	int i = 0;
	while (!feof(stdin)) {
		Student s;
		string temp;
		if (i != 0) {
			getline(cin, temp);
		}
		s.input();
		list.push_back(s);
		i = 1;
	}
}
//Generate randomly n Students and add to the previous vector

void  Students::AddNStudentToList() {
	int n = setNumAdd();
	for (int i = 0; i < n; i++) {
		Student s;
		s.createDataStu();
		list.push_back(s);
	}

}
//Overwrite and save and the students in the current vector back to the file "students.txt"
void Students::SaveToFile() {
	freopen("Students.TXT", "wt", stdout);
	for (int i = 0; i < list.size(); i++)
		list[i].output();

}
//Print out the average GPA of all students
float Students::avgGpa() {
	float sum = 0;
	for (int i = 0; i < list.size(); i++)
		sum += list[i].getGpa();
	return roundf(sum / list.size() * 100) / 100;
}
//Print out all the students that have a GPA greater than the average GPA
void Students::greaterAvgGpa() {
	for (int i = 0; i < list.size(); i++)
		if (list[i].getGpa() > avgGpa())
			list[i].output();

}