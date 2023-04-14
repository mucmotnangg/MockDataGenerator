#include "Students.h"
int main() {
	Students list;
	list.Read();
	list.AddNStudentToList();
	list.SaveToFile();
	freopen("CON", "w", stdout);
	cout.clear();
	cout<<"Average GPA of all students: "<<list.avgGpa()<<endl;
	cout << "All the students that have a GPA greater than the average GPA: " << endl;
	list.greaterAvgGpa();




	return 0;
}