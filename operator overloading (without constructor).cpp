#include<iostream>
using namespace std;
class student
{
	public:
		int marks;
		
		student operator +(student s)
		{
			student temp;
			temp.marks=marks+s.marks;
			return temp;
		}
		void display()
		{
			cout<<"student marks total is: "<<marks;
		}
};
main()
{
	student s1,s2,s3;
	s1.marks=76;
	s2.marks=66;
	s3=s1+s2;
	s3.display();
}