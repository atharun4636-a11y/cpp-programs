#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"student object created: ";
		}
		void display()
		{
			cout<<" welcome";
		}
};
int main()
{
	student().display();
	return 0;
}