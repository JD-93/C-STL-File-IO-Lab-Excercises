/*			1. Create STL list of string and add following names of your 10 friends.
 * 			Sort the list and display in
 * 			reverse order using reverse iterator.
*/


#include <iostream>
using namespace std;
#include <list>
#include <string>
#include <algorithm>

int main() {

	list <string> name ;

	string temp_name ;
	for( int i=0 ; i<3 ; i++ ){
		cout<<"Enter name "<<i+1 <<" :" ;
		cin>>temp_name ;
		name.push_back(temp_name) ;
	}

	name.sort() ;


	list <string> ::reverse_iterator p ;
	p = name.rbegin() ;

	while (p!=name.rend()){
		cout<<"Name : "<<*p <<endl;
		p++ ;
	}


	return 0;
}
