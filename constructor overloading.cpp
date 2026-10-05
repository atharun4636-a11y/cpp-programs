#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
		student()
		{
			cout<<"A";
		}
		student(string n)
		{
			cout<<"B";
		}
		student(string n,int a)
		{
			cout<<"C";
		}
};
main()
{
	student s1;
	student s2("Tarun");
	student s3("chinna",86);
	
}