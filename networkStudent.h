#pragma once
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include<iostream>
#include<string>
#include "student.h"
using namespace std;

//Derived Class
class NetworkStudent : public Student {

public:

	NetworkStudent();
	~NetworkStudent();
	NetworkStudent(Degree degreeType);
	Degree getDegreeProgram();
	void Print();

private:	//Data member

	Degree degree;
};

#endif