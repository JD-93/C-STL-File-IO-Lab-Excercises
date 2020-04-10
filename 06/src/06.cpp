/*Create matrix using STL vector of size NxN where N is odd number entered by user.
 * Input values from user and
 * check if its both diagonal sum is same or not.
 * Print the message accordingly.*/

#include <iostream>
using namespace std;
#include <vector>
#include <iomanip>

int main() {

	cout<<"Enter size of matrix : " ;
	int size ;
	cin>>size ;

	vector <vector <int>> mat(size) ;

	for (int i=0 ; i<size ; i++ ){
		vector<int> v(size) ;
		mat[i] = v ;
	}

	for (int i=0 ; i<mat.size() ; i++ ){
		for (int j=0 ; j<mat[i].size() ; j++ ){
			cout<<"Enter mat ["<<i<<"]["<<j<<"] : " ;
			cin>>mat[i][j] ;
		}
	}


	for (int i=0 ; i<mat.size() ; i++ ){
		for (int j=0 ; j<mat[i].size() ; j++ ){
			cout<<setw(3)<<mat[i][j] ;
		}
		cout<<endl ;
	}

	int sum1= 0 ;
	for (int i=0 ; i<mat.size() ; i++ ){
		for (int j=0 ; j<mat[i].size() ; j++ ){
			if (i==j) sum1 += mat[i][j] ;
		}
		cout<<endl ;
	}
	cout<<"Sum is : "<<sum1 <<endl ;



	int sum2= 0 ;
	for (int i=0 ; i<mat.size() ; i++ ){
		for (int j=0 ; j<mat[i].size() ; j++ ){
			if (  i+j == size-1   ) sum2 += mat[i][j] ;
		}
		cout<<endl ;
	}
	cout<<"Sum is : "<<sum2 <<endl ;

	if (sum1 == sum2 )
		cout<<"Both diagonal sum are same" <<endl ;
	else
		cout<<"Both diagonal sum are not same"<<endl ;


	return 0;
}
