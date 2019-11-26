#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
#include"degree.h"
using namespace std;


class Student {
public:

	Student(); //Default Constructor
	Student(string student, string fName, string lName, string emailAdd, int sAge, int daysCrse1, int daysCrse2, int daysCrse3); //Constructor with parameters
	~Student(); //Destructor

	//Accessor functions
	void SetStudentID(string student);
	void SetFirstName(string fName);
	void SetLastName(string lName);
	void SetEmailAddress(string emailAdd);
	void SetAge(int sAge);
	void SetDays(int daysCrse1, int daysCrse2, int daysCrse3);
	
	//Mutator functions
	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetAge() const;
	int GetDay1() const;
	int GetDay2() const;
	int GetDay3() const;
	
	//Virtual Print function
	virtual void Print() = 0;
	virtual Degree getDegreeProgram() = 0;



protected: //Data members

	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];
	Degree degree;

};

#endif