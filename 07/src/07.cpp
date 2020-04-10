/*
A text file contains set of integer (in range of 1 to 9) values separated by spaces.
Read them into
STL vector.
Find the missing numbers from them.
Input: 3 7 9 4 3 7 9 8 6 4 7 2
Output: 1 5
*/

#include <iostream>
using namespace std;
#include <vector>
#include <fstream>
#include <algorithm>

int main()
{
	vector <int> v ;
	vector <int> result ;
	ifstream in ;
	in.open("TEST.txt") ;

	int no ;
	while (!in.eof()){
		in>>no ;
		v.push_back(no) ;
	}

	vector <int>::iterator p ;

	for (int i=1 ; i<9 ; i++ ){
		p = find(v.begin(),v.end(),i) ;
		if (p == v.end())
			result.push_back(i) ;
	}

	vector<int>::iterator itr ;
	itr = result.begin() ;

	while (itr != result.end()){
		cout<<*itr<<" " ;
		itr++ ;
	}


}
