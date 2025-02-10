
//headers
#include <iostream>
#include <string>
#include <limits>
#include <format>
//string User(const string& message, const string& errorMessage);

using namespace std;

struct Course {

	string name;
	float midterm;
	float exam;
	float project;
};

float getID(const string& message, const string& errorMessage, const string& acceptedMessage, int minNumber, int maxNumber);
Course createCourse(string name, float midterm, float project, float exam);

int main()
{
    const int nbCourses = 3;
    Course myCourses[nbCourses];

    string tempName;
    float tempMidterm;
    float tempProject;
    float tempExam;

    for (int i = 0; i < nbCourses; i++) 
    {
        cout << "Please enter your course name: ";
        getline(cin, tempName);

        tempMidterm = getID("Please enter your midterm score: ", "Please enter a number between 0 and 100", "Good number", 0, 100);
        tempProject = getID("Please enter your project score: ", "Please enter a number between 0 and 100", "Good number", 0, 100);
        tempExam = getID("Please enter your exam score: ", "Please enter a number between 0 and 100", "Good number", 0, 100);
        myCourses[i] = createCourse(tempName, tempMidterm, tempProject, tempExam);
    }

    for (Course myCourse : myCourses) {
        cout << "\n"
            << "your course name is: " << myCourse.name << "\n"
            << "your midterm score is: " << myCourse.midterm << "\n"
            << "your project score is: " << myCourse.project << "\n"
            << "your exam score is: " << myCourse.exam << endl;
    }
   
	return 0;
}


Course createCourse(string name, float midterm, float project, float exam) 
{
    //creating the variable in the stack
    Course myCourse;
    myCourse.name = name;
    myCourse.midterm = midterm;
    myCourse.project = project;
    myCourse.exam = exam;

  

    return myCourse;
}
float getID(const string& message, const string& errorMessage, const string& acceptedMessage, int minNumber, int maxNumber)
{
    float number;
    while (true) {
        cout << message;
        cin >> number;

        if (cin.fail()) 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << errorMessage << endl;
            continue;
            
        }
        if (number < minNumber || number > maxNumber) 
        {
            cout << errorMessage << endl;
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return number;
    }
}
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



