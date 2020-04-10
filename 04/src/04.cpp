/*
Create STL list of int values.
 *  Add 100 random values in it (use rand() function of C).
 *   Display all unique elements in list
 *   Hint: use set.
 *
*/
#include <iostream>
using namespace std;
#include <list>
#include <set>

int main() {

	list <int> lst ;
	int count = 0 ;
	for (int i=0 ; i<100 ; i++ ){
		int temp ;
		temp = rand() ;
		lst.push_back(temp) ;
		count++ ;
	}


	cout<<"\n\ncount : "<<count<<"\n\n" ;
	count=0 ;

//	lst.unique() ;                //---> one liner solution

	set <int> s ;
	list <int> ::iterator lisst ;
	lisst = lst.begin() ;

	while (lisst != lst.end()){
		s.insert(s.begin(),*lisst) ;
		lisst++;
	}

	set <int> :: iterator xyz ;
	xyz = s.begin() ;

	while (xyz != s.end()){
		cout<<*xyz <<endl ;
		count++ ;
		xyz++ ;
	}


/*
	list <int> ::iterator p ;
	p=lst.begin() ;
	while (p != lst.end() ) {
		cout<<*p <<endl ;
		p++ ;
		count++ ;
	}
*/

	cout<<"\n\ncount : "<<count<<"\n\n" ;


	return 0;
}
