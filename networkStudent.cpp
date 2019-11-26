#include "networkStudent.h"
#include<iostream>
#include<string>
using namespace std;


//Default Constructor
NetworkStudent::NetworkStudent() {
	degree = NETWORK;
}


//Destructor
NetworkStudent::~NetworkStudent() {

}


//Constructor with parameter
NetworkStudent::NetworkStudent(Degree degreeType) {
	degree = degreeType;
}


//Get Degree program
Degree NetworkStudent::getDegreeProgram() {
	return degree;
}


//Print function
void NetworkStudent::Print() {
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