/*
 * Declare a string to store some information.
 * Use stringstream class to tokenize string into multiple words and put them into a vector.
 * Count frequeny of each word (use map) and finally print the word that is repeated maximum along with its count.
 string info = "coronavirus disease is an infectious disease caused by a new virus. the disease
causes respiratory illness with symptoms such as a cough, fever, and in more severe cases, difficulty
breathing. you can protect yourself by washing your hands frequently, avoiding touching your face,
and avoiding close contact with people who are unwell.";
 */

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <sstream>


int main() {

	string info = "coronavirus.disease is an infectious disease caused by a new virus. the disease 	causes respiratory illness with symptoms such as a cough, fever, and in more severe cases, difficulty breathing. you can protect yourself by washing your hands frequently, avoiding touching your face, and avoiding close contact with people who are unwell." ;
	string info1 = "jaydeep ashok kachare" ;
	stringstream obj(info1) ;

	string next ;

	vector <string> v ;



	for (int i=0 ; i<v.size() ; i++ ){
		cout<<v[i]<<endl ;
	}


	return 0;
}
