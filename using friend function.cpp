#include<iostream>
using namespace std;
class student
{
	protected:
		int id;
		friend void display(int,student s);
};
void display(int sid,student s)
{
	s.id=sid;
	cout<<"student id: "<<s.id;
}
main()
{
	student s1;
	display(111,s1);
}