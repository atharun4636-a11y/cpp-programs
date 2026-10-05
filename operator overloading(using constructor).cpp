#include<iostream>
using namespace std;
class student
{
	public:
	int marks;
	student(int m):marks(m){ }
	student operator+(student s)
	{
		return student(marks+s.marks);
	}
	void display()
	{
		cout<<"student marks total is: "<<marks;
	}
};
main()
{
	student s1(77),s2(85);
	student s3=s1+s2;
	s3.display();
}