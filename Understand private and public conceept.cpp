#include<iostream>
using namespace std;
class student{
	private:
		int balance;
	public:
		string name;
		void bankdetails()
		{
			cout<<name<<" ";
			balance=5000;
		}
		void display()
		{
			cout<<balance;
		}
};
main()
{
	student s1;
	s1.name="Tharun";
	s1.bankdetails();
	s1.display();
}