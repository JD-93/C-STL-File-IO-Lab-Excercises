//============================================================================
// Name        : 08_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <fstream>

int main() {

	 ofstream file ;
	 file.open("TEST.txt") ;

	 char ch = 'A' ;
	 file.write((char*)&ch,sizeof(char)) ;

}
