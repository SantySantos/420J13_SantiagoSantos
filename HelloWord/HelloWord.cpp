
//headers
#include <iostream>
#include <string>
#include <limits>


//int getID(const string& message, const string& errorMessage, const string& acceptedMessage, int minNumber, int maxNumber);
//string User(const string& message, const string& errorMessage);

using namespace std;

struct Course {
	string name;
	float midterm;
	float exam;
	float project;
};

int main()
{
	//num of courses

	const int numCourses = 3;

	//creating the variable in the stack
	Course courses[numCourses];

	//adding info to the courses
	courses[0].name = "Game Engine";
	courses[0].midterm = 30;
	courses[0].project = 30;
	courses[0].exam = 40;

	courses[1].name = "OOP";
	courses[1].midterm = 25;
	courses[1].project = 20;
	courses[1].exam = 35;

	courses[2].name = "French";
	courses[2].midterm = 25;
	courses[2].project = 15;
	courses[2].exam = 30;

	for (int i = 0; i < numCourses; i++) {

		cout << "Course Name: " << courses[i].name << "\n"
			<< "Midterm: " << courses[i].midterm << "\n"
			<< "Project: " << courses[i].project << "\n"
			<< "Final Exam: " << courses[i].exam << "\n"
			<< "Total:" << courses[i].midterm + courses[i].project + courses[i].exam << "\n"
			<< "\n";
	}


	return 0;
}
//
//int getID(const string& message, const string& errorMessage, const string& acceptedMessage,int minNumber, int maxNumber)
//{
//    int number;
//    while (true) {
//        cout << message;
//        cin >> number;
//
//        if (cin.fail()) 
//        {
//            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//            cout << errorMessage << endl;
//            continue;
//            
//        }
//        if (number < minNumber || number > maxNumber) 
//        {
//            cout << errorMessage << endl;
//            continue;
//        }
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        return number;
//    }
//}
//
//string User(const string& message, const string& errorMessage)
//{
//    string input;
//    cout << message; 
//    getline(cin, input);
//    bool isValid = false;
//
//    while(!isValid)
//    {
//        if (input.empty()) 
//        {
//            cout << errorMessage << "\n" << message ;
//            getline(cin, input);
//        }
//            
//        else
//            isValid = true;
//    }
//
//    return input;  
//}



