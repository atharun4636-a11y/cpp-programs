#include<iostream>
using namespace std;
template<class T,class U>
void display(T a, U b)
{
	cout<<"First value:"<<a<<endl;
	cout<<"second value:"<<b<<endl;
}
main()
{
	display(10,20.5);
	return 0;
}