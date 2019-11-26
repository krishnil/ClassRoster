#include<iostream>
#include<string>
#include "student.h"
using namespace std;


//Default Costructor
Student::Student() { 
	studentId = "";
	firstName = "";
	lastName = "";
	emailAddress = "";
	age = 0;
	daysInCourse[0] = 0;
	daysInCourse[1] = 0;
	daysInCourse[2] = 0;
	return;
}


//Constructor with all input parameters
Student::Student(string student, string fName, string lName, string emailAdd, int sAge, int daysCrse1, int daysCrse2, int daysCrse3) {
	studentId = student;
	firstName = fName;
	lastName = lName;
	emailAddress = emailAdd;
	age = sAge;
	daysInCourse[0] = daysCrse1;
	daysInCourse[1] = daysCrse2;
	daysInCourse[2] = daysCrse3;
	return;
}


//Destructor
Student::~Student() {
	
}


//Mutator functions
void Student::SetStudentID(string student) {
	studentId = student;
	return;
}
void Student::SetFirstName(string fName) {
	firstName = fName;
	return;
}
void Student::SetLastName(string lName) {
	lastName = lName;
	return;
}
void Student::SetEmailAddress(string emailAdd) {
	emailAddress = emailAdd;
	return;
}
void Student::SetAge(int sAge) {
	age = sAge;
	return;
}
void Student::SetDays(int daysCrse1, int daysCrse2, int daysCrse3) {
	daysInCourse[0] = daysCrse1;
	daysInCourse[1] = daysCrse2;
	daysInCourse[2] = daysCrse3;
	return;
}



//Accessor functions
string Student::GetStudentID() const {
	return studentId;
}
string Student::GetFirstName() const {
	return firstName;
}
string Student::GetLastName() const {
	return lastName;
}
string Student::GetEmailAddress() const {
	return emailAddress;
}
int Student::GetAge() const {
	return age;
}
int Student::GetDay1() const {
	return daysInCourse[0];
}
int Student::GetDay2() const {
	return daysInCourse[1];
}
int Student::GetDay3() const {
	return daysInCourse[2];
}



//Print function
void Student::Print() {
	cout << "First Name: " << GetFirstName() << "\t";
	cout << "Last Name: " << GetLastName() << "\t";
	cout << "Age: " << GetAge() << "\t";
	cout << "daysInCourse: {" << GetDay1() << ", "  << GetDay2() << ", " << GetDay3() << "}" << "\t";
}



//Get Degree program
Degree Student::getDegreeProgram() {
	return degree;
}