/*
 * student.cpp
 *
 *  Created on: 11-Apr-2020
 *      Author: sunbeam
 */

#include "student.h"
#include <iostream>
#include <string.h>
using namespace std;

student::student() {
	memset(this,1,sizeof(student()) ) ;
}

float student::getMarks() const {
	return marks;
}

void student::setMarks(float marks) {
	this->marks = marks;
}

const char* student::getName() const {
	return name;
}
void student::setName(char *name) {
	strcpy(this->name , name) ;
}

int student::getRollNo() const {
	return roll_no;
}

void student::setRollNo(int rollNo) {
	roll_no = rollNo;
}

student::~student() {
	// TODO Auto-generated destructor stub
}

void student::accept() {
	cout<<"Enter student details : "<<endl ;
	int roll_no ;
	char name[12] ;
	float marks;
	cout<<"roll no : " ;
	cin>>roll_no ;
	this->setRollNo(roll_no) ;
	cout<<"name : " ;
	cin>>name ;
	this->setName(name) ;
	cout<<"marks : ";
	cin>>marks ;
	this->setMarks(marks) ;
}


void student::display() {
	cout<<"Here is student details : "<<endl ;
	cout<<"roll no : "<<this->getRollNo()<<endl ;
	cout<<"name : "<<this->getName() <<endl ;
	cout<<"marks : "<<this->getMarks() <<endl ;
}
