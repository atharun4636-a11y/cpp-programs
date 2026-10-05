#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int marks;
	int age;
	student(string name,int marks,int age)
	{
		this->name=name;
		this->marks=marks;
		this->age=age;
	}
	void display()
	{
		cout<<name<<" "<<marks<<" "<<age<<endl;
	}
};
main()
{
	student s1("Tharun",80,19);
	student s2("ravi",95,19);
	s1.display();
	s2.display();
}