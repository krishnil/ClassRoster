#include<iostream>
#include<string>
#include<vector>
#include "roster.h"
using namespace std;


//Default Constructor
Roster::Roster() {
	studentPtr = new SecurityStudent(SECURITY);		//creates objects
	studentPtr->SetStudentID("A1");
	studentPtr->SetFirstName("John");
	studentPtr->SetLastName("Smith");
	studentPtr->SetAge(20);
	studentPtr->SetEmailAddress("John1989@gm ail.com");
	studentPtr->SetDays(30, 35, 40);

	classRosterArray.push_back(studentPtr);		//updates object pointer

	studentPtr = new NetworkStudent(NETWORK);
	studentPtr->SetStudentID("A2");
	studentPtr->SetFirstName("Suzan");
	studentPtr->SetLastName("Erickson");
	studentPtr->SetAge(19);
	studentPtr->SetEmailAddress("Erickson_1990@gmailcom");
	studentPtr->SetDays(50, 30, 40);

	classRosterArray.push_back(studentPtr);

	studentPtr = new SoftwareStudent(SOFTWARE);
	studentPtr->SetStudentID("A3");
	studentPtr->SetFirstName("Jack");
	studentPtr->SetLastName("Napoli");
	studentPtr->SetAge(19);
	studentPtr->SetEmailAddress("The_lawyer99yahoo.com");
	studentPtr->SetDays(20, 40, 33);

	classRosterArray.push_back(studentPtr);

	studentPtr = new SecurityStudent(SECURITY);
	studentPtr->SetStudentID("A4");
	studentPtr->SetFirstName("Erin");
	studentPtr->SetLastName("Black");
	studentPtr->SetAge(22);
	studentPtr->SetEmailAddress("Erin.black@comcast.net");
	studentPtr->SetDays(50, 58, 40);

	classRosterArray.push_back(studentPtr);

	studentPtr = new SoftwareStudent(SOFTWARE);
	studentPtr->SetStudentID("A5");
	studentPtr->SetFirstName("Krishnil");
	studentPtr->SetLastName("Prasad");
	studentPtr->SetAge(21);
	studentPtr->SetEmailAddress("kprasa1@wgu.edu");
	studentPtr->SetDays(20, 30, 40);

	classRosterArray.push_back(studentPtr);
	return;
}


//Destructor
Roster::~Roster() {
	delete studentPtr;
	cout << "Destructor called" << endl;
}


//Sets instance variables and updates the Roster
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeType) {
	if (degreeType == SOFTWARE) {			
		studentPtr = new SoftwareStudent(SOFTWARE);
		studentPtr->SetStudentID(studentID);
		studentPtr->SetFirstName(firstName);
		studentPtr->SetLastName(lastName);
		studentPtr->SetAge(age);
		studentPtr->SetEmailAddress(emailAddress);
		studentPtr->SetDays(daysInCourse1, daysInCourse2, daysInCourse3);

		classRosterArray.push_back(studentPtr);
	}
	if (degreeType == NETWORK) {
		studentPtr = new NetworkStudent(NETWORK);
		studentPtr->SetStudentID(studentID);
		studentPtr->SetFirstName(firstName);
		studentPtr->SetLastName(lastName);
		studentPtr->SetAge(age);
		studentPtr->SetEmailAddress(emailAddress);
		studentPtr->SetDays(daysInCourse1, daysInCourse2, daysInCourse3);

		classRosterArray.push_back(studentPtr);
	}
	if (degreeType == SECURITY) {
		studentPtr = new SecurityStudent(SECURITY);
		studentPtr->SetStudentID(studentID);
		studentPtr->SetFirstName(firstName);
		studentPtr->SetLastName(lastName);
		studentPtr->SetAge(age);
		studentPtr->SetEmailAddress(emailAddress);
		studentPtr->SetDays(daysInCourse1, daysInCourse2, daysInCourse3);

		classRosterArray.push_back(studentPtr);
	}
}


//Removes students from the roster by student ID. If the student ID does not exist, the function prints an error message.
void Roster::remove(string studentID) {
	int list = 0;
	list = classRosterArray.size();
	bool studentFound = false;

	for (i = 0; i < list; ++i) {
		if (classRosterArray.at(i)->GetStudentID() == studentID) {
			studentFound = true;
			classRosterArray.erase(classRosterArray.begin() + i);
			cout << "Student ID: " << studentID << " was removed." << endl;
			break;
		}
	}
	if (studentFound == false) {
		cout << "A student with Student ID: " << studentID << " was not found." << endl;
	}

}


//Prints the complete student list looping through classRosterArray and calling the Print() function
void Roster::printAll() {
	int list = 0;
	list = classRosterArray.size();
	for (i = 0; i < list; ++i) {
		classRosterArray.at(i)->Print();
	}
}


//Prints a students average number of days in the three courses, identified by the studentID parameter
void Roster::printAverageDaysInCourse(string studentID) {
	int list = 0;
	list = classRosterArray.size();
	int position = 0;
	for (i = 0; i < list; ++i) {
		if ((classRosterArray.at(i)->GetStudentID()) == studentID) {
			position = i;
		}
	}
	double average = 0.0;
	average = (classRosterArray.at(position)->GetDay1() + classRosterArray.at(position)->GetDay2() + classRosterArray.at(position)->GetDay3()) / 3;
	cout << "Student ID: " << studentID << "\t" << "Average days in Course: " << average << endl;
}


//verifies students' email addresses and prints invalid email addresses
void Roster::printInvalidEmails() {
	int list = 0;
	list = classRosterArray.size();
	bool validEmail = false;
	int atPresent = 0;
	int dotPresent = 0;
	string email = "";
	unsigned int j = 0;

	cout << "Invalid email addresses:" << endl;

	for (i = 0; i < list; ++i) {
		email = classRosterArray.at(i)->GetEmailAddress();
		for (j = 0; j < email.length(); ++j) {
			if (email[j] == ' ') {
				validEmail = false;
				break;
			}
			if (email[j] == '.') {
				dotPresent += 1;
			}
			if (email[j] == '@') {
				atPresent += 1;
			}
		}

		if ((dotPresent > 0) && (atPresent > 0)) {
			validEmail = true;
		}

		if (validEmail == false) {
			cout << classRosterArray.at(i)->GetEmailAddress() << endl;
		}

		dotPresent = 0;
		atPresent = 0;
	}
}


//Accessor function for student ID
string Roster::getStudentID(int position) const {
	return classRosterArray.at(position)->GetStudentID();
}


//gets the class roster size
int Roster::getLimit() const {
	int limit = 0;
	limit = classRosterArray.size();
	return limit;
}


//prints student info according to the degree type 
void Roster::printByDegreeProgram(Degree degreeType) {
	int list = 0;
	list = classRosterArray.size();
	for (i = 0; i < list; ++i) {
		if (classRosterArray.at(i)->getDegreeProgram() == degreeType) {
			classRosterArray.at(i)->Print();
		}
	}
}



int main() {

	cout << "Course Title : Scripting and Programming Applications" << endl;
	cout << "Programming Language: C++" << endl;
	cout << "Student ID: 001023381" << endl;
	cout << "Name: Krishnil Prasad" << endl;


	cout << endl << endl;
	Roster classRoster;		//Creates class roster and adds students


	classRoster.printAll(); //Prints all information
	cout << endl << endl;


	classRoster.printInvalidEmails();	//verifies email addresses and prints invalid email addresses
	cout << endl << endl;
	

	//loops through class roster and prints average days in course for each student
	int i = 0;
	for (i = 0; i < classRoster.getLimit(); ++i) {
		classRoster.printAverageDaysInCourse(classRoster.getStudentID(i));
	}

	cout << endl << endl;
	

	classRoster.printByDegreeProgram(SOFTWARE);	//Prints all information about students who are in the Software Degree program
	cout << endl << endl;


	classRoster.remove("A3");	
	classRoster.remove("A3");	
	cout << endl << endl;

	return 0;
}