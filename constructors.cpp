#include<iostream>
using namespace std;
class Book
{
	public:
	int id;
	// Default constructor
	Book()
	{
		id=10;
		cout<<"default constructor: "<<id<<endl;
	}
	//parmeterized constructor
	Book(int sid)
	{
		id=sid;
	}
	//copy constructor
	Book(Book &b1)
	{
		id=b1.id;
	}
	//move constructor
	Book(Book && b)
	{
		id=b.id;
		b.id=0;
		cout<<"move constructor: "<< b.id <<endl;
	}
	

};
main()
{
	Book b;
	Book b1(111);
	Book b2(b1);
	Book b3(move(b1));
	cout<<"parameterized constructor is: "<<b1.id<<endl;
	cout<<"copy constructor vaule is: "<<b2.id<<endl;
	cout<<"move constructor vaule ios: "<<b3.id<<endl;
	return 0;
}