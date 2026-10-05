#include<iostream>
using namespace std;
class A{
	public:
	void show_A()
	{
		cout<<"class A"<<endl;;
	}
	
};
class B:public A{
	public:
	void show_B()
	{
		cout<<"class B"<<endl;
	}
	
};
class C:public B{
	public:
		void show_C()
		{
			cout<<"class C"<<endl;
		}
	
};
main()
{
	C c;
	c.show_C();
	c.show_B();
	c.show_A();
}