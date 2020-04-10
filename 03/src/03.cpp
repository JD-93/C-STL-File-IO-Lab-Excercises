/* Create STL queue of double values.
 *  Write a menu driven program to push, pop, peek and delete all values in queue.
 *  After each operation display current size of queue.*/

#include <iostream>
using namespace std;
#include <queue>

int menulist()
{
	cout<<endl ;
	cout<<"0. EXIT"<<endl ;
	cout<<"1. PUSH "<<endl ;
	cout<<"2. POP"<<endl ;
	cout<<"3. PEKK"<<endl ;
	cout<<"4. DELETE ALL"<<endl ;
	cout<<"Enter choice : " ;
	int choice ;
	cin>>choice ;
	return choice ;
}
void delete_all (queue<double> q)
{
	while (!q.empty()){
		cout<<q.front()<<"--->";
		q.pop() ;
	}
}
int main() {
	queue <double> q ;
	int choice ;
	while((choice=menulist()) != 0 )
	{
		switch (choice) {
			case 1:
				cout<<"Enter no : " ;
				double temp ;
				cin>>temp ;
				q.push(temp) ;
				cout<<"current queu size : "<<q.size() <<endl ;
				break;

			case 2 :
				q.pop() ;
				cout<<"current queu size : "<<q.size() <<endl ;
				break ;

			case 3 :
				cout<<"queue front :"<<q.front()<<endl ;
				cout<<"queue back : "<<q.back()<<endl ;
				break ;

			case 4 :
				delete_all(q) ;
				cout<<"\nall values are deleted ..."<<endl ;
				break ;

			default:
				cout<<"Enter valid choice ... "<<endl ;
				break;
		}
	}


	return 0;
}
