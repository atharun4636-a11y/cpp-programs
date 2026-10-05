#include<iostream>
using namespace std;
class parent
{
	public:
	parent()
	{
		cout<<"parent class"<<endl;
	}
};
class child1: virtual public parent
{
	public:
		child1():parent()
		{
			cout<<"child1 class"<<endl;
		}
};
class child2: virtual public parent
{
	public:
		child2():parent()
		{
			cout<<"child2 class"<<endl;		
		}
};
class smallchild:public child1,public child2
{
	public:
		void display()
		{
			cout<<"small child";
		}
};
main()
{
	smallchild sc;
	sc.display();
	
}