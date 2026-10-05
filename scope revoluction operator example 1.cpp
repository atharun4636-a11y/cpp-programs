#include<iostream>
using namespace std;
int a=50;
namespace student
{
	
	int a=100;
}
class stu
{
	public:
		static int a;
};
int stu::a=200;
main()
{
	int a=10;
	cout<<"local :"<<a<<endl;
	cout<<"global :"<<::a<<endl;
	cout<<"number space vaule:"<<student::a<<endl;
	cout<<"class variable vaule:"<<stu::a;
}