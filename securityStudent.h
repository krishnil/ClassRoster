#pragma once
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include<iostream>
#include<string>
#include "student.h"
using namespace std;


//Derived Class
class SecurityStudent : public Student {

public:

	SecurityStudent();
	~SecurityStudent();
	SecurityStudent(Degree degreeType);
	Degree getDegreeProgram();
	void Print();

private:	//Data member

	Degree degree;

};

#endif



