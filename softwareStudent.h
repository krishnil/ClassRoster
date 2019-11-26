#pragma once
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include<iostream>
#include<string>
#include "student.h"
using namespace std;


//Derived class
class SoftwareStudent : public Student {

public:

	SoftwareStudent();
	~SoftwareStudent();
	SoftwareStudent(Degree degreeType);
	Degree getDegreeProgram();
	void Print();

private:	//Data member

	Degree degree;

};

#endif