/*
 * student.h
 *
 *  Created on: 11-Apr-2020
 *      Author: sunbeam
 */

#ifndef STUDENT_H_
#define STUDENT_H_

class student {
	int roll_no ;
	char name[12] ;
	float marks ;
public:
	student();
	virtual ~student();


	float getMarks() const;
	void setMarks(float marks);
	const char* getName() const;
	void setName(char * name) ;
	int getRollNo() const;
	void setRollNo(int rollNo);

	void accept() ;
	void display() ;
};

#endif /* STUDENT_H_ */
