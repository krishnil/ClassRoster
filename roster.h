#pragma once
#ifndef ROSTER_H
#define ROSTER_H

#include<iostream>
#include<string>
#include<vector>
#include "softwareStudent.h"
#include "securityStudent.h"
#include "networkStudent.h"
using namespace std;

//Roster Class
class Roster {

public:

	Roster();
	~Roster();

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeType);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(Degree degreeType);
	int	 getLimit() const;
	string getStudentID(int position) const;

private:

	Student* studentPtr = nullptr;
	vector<Student*> classRosterArray;
	int i = 0;
};



#endif