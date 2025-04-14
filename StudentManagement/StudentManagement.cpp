#include <iostream>
#include <string>
#include <limits>
#include <format>
#include <stack>

using namespace std;


struct Student
{
    string name;
    int id;
    double *grades; // this is an pointer on an address (it could be anything)
};
    

int main()
{

	stack<Student> myStack;
    int nbStudent;
    int nbSubject;
    cout << "Please enter the number of students: " << endl;
    cin >> nbStudent;
    cout << "Please enter the number of subjects" << endl;
    cin >> nbSubject;

    Student* students = new Student[nbStudent];

    for (int i = 0; i < nbStudent; i++)
    {
        cout << "Name: " << endl;
        cin >> students[i].name; // fine
        cout << "ID: " << endl;
        cin >> students[i].id;   // fine    

        students[i].grades = new double[nbSubject]; // the student.grades is a pointer on an array
        for (int j = 0; j < nbSubject; j++) {

            cout << "Enter the grade for subject " << (j + 1) << endl;
            cin >> students[i].grades[j]; // this is creating an errri
        }

		myStack.push(students[i]); // push the student into the stack
    }

	//display the students
   
    while (!myStack.empty()) {

		Student currentStudent = myStack.top();
		cout << "Name: " << currentStudent.name << endl;
		cout << "ID: " << currentStudent.id << endl;
		cout << "Grades: ";
		for (int i = 0; i < nbSubject; i++) {
			cout << currentStudent.grades[i] << ", ";
		}
		cout << endl;
		myStack.pop();
    }

	getchar();

	delete[] students;     // free the memory allocated for students
    
    return 0;
}


