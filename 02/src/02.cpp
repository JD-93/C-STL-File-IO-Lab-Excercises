/*
 Create STL vector of float of size given by the user.
Input values from the user.
Iterate through the vector two times to find minimum value and maximum value.
Use subscript operator for the first iteration,
 iterator for the second iteration.
*/


#include <iostream>
using namespace std;
#include <vector>

int main() {
	cout<<"Enter size of double vector : " ;
	int size ;
	cin>>size ;

	vector <double> v  ;

	double temp ;
	for (int i=0 ; i<size ;i++ ){
		cout<<"Enter value "<<i<<" : " ;
		cin>>temp ;
		v.push_back(temp) ;
	}

	double min = v[0] ;
	for (int i=0 ; i<v.size() ; i++ ){
		if (v[i] < min )
			min = v[i] ;
	}
	cout<<"min value subscript : "<<min<<endl  ;

	vector<double>::iterator p ;
	p=v.begin() ;
	min = *p ;

	while (p != v.end()){
		if (*p < min )
			min = *p ;
		p++ ;
	}
	cout<<"min value ieterator : "<<min<<endl  ;


	return 0;
}
