#include "securityStudent.h"
#include<iostream>
#include<string>
using namespace std;


//Default Constructor
SecurityStudent::SecurityStudent() {
	degree = SECURITY;
}


//Destructor
SecurityStudent::~SecurityStudent() {
	
}


//Constructor with parameter
SecurityStudent::SecurityStudent(Degree degreeType) {
	degree = degreeType;
}


//Get Degree program
Degree SecurityStudent::getDegreeProgram() {
	return degree;
}


//Print function
void SecurityStudent::Print() {
	cout << "First Name: " << GetFirstName() << "\t";
	cout << "Last Name: " << GetLastName() << "\t";
	cout << "Age: " << GetAge() << "\t";
	cout << "daysInCourse: {" << GetDay1() << ", " << GetDay2() << ", " << GetDay3() << "}" << "\t";
	cout << "Degree Program: ";
	switch (getDegreeProgram()) {
	case 0:
		cout << "Security" << endl;
		break;
	case 1:
		cout << "Network" << endl;
		break;
	case 2:
		cout << "Software" << endl;
		break;
	default:
		cout << "Unknown" << endl;
		break;
	}
}