#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int age;
	student(string n,int a)
	{
		cout<<n<<" "<<a<<endl;
	}
};
main()
{
	student s1("Chinaa",86);
	student s2("Tharun",85);
}