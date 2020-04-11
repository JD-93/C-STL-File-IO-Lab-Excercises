/*Create a student class storing roll number, name (use char[] not string) and marks.
 * Write a menu driven File IO program using C++ library classes
 * to add student, display all students, find student by roll number and edit student.*/

#include <iostream>
using namespace std;
#include "student.h"
#include <fstream>

int menulist() ;

int main() {

	ofstream ofile ;
	ifstream ifile ;


	student s ;


	int choice ;
	while ((choice = menulist()) != 0 ){
		switch (choice) {
			case 1:
				ofile.open("student",ios::binary|ios::app) ;
				s.accept() ;
				ofile.write((char *)&s,sizeof(student)) ;
				ofile.close() ;
				break;

			case 2 :
					ifile.open("student",ios::binary) ;
					while(!ifile.eof()){
					ifile.read((char *)&s,sizeof(student)) ;
					s.display() ;
					cout<<endl ;
				}
					ifile.close() ;
				break ;

				/* doubt*/
	/* when i am tring to print last roll no file it get printed twice */ // ??????????

			case 3 :
				ifile.open("student",ios::binary) ;
				int roll ;
				cout<<"Enter roll no to be searched : " ;
				cin>>roll ;
				while(!ifile.eof()){
					ifile.read((char*)&s,sizeof(student)) ;
					if (s.getRollNo() == roll )
						s.display() ;
				}
				ifile.close() ;
				break ;

			case 4 :
				ifile.open("student",ios::binary) ;
				cout<<"Enter roll no to be searched : " ;
				int roll1 ;
				cin>>roll1 ;
				while(!ifile.eof()){
					ifile.read((char *)&s,sizeof(student)) ;
					if (s.getRollNo() == roll1 ){
						cout<<"Here is old data : " <<endl;
						s.display() ;
						cout<<"Now re enter data for roll no : " ;
						s.accept() ;
						s.display() ;
					}
				}
				ifile.close() ;
				break ;

			default:
				cout<<"\nEnter valis choice..."<<endl ;
				break;
		}
	}

	return 0;
}
int menulist()
{
	cout<<"\n\n0. EXIT "<<endl ;
	cout<<"1. ADD STUDENT" <<endl ;
	cout<<"2. DISPLAY ALL STUDENT"<<endl ;
	cout<<"3. FIND SRUDENT BY ROLL NO "<<endl ;
	cout<<"4. EDIT STUDENT" <<endl ;
	cout<<"Enter choice : " ;
	int choice ;
	cin>>choice ;
	return choice ;

}
