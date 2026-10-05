#include<iostream>
using namespace std;
class parent{
	public:
	string car;
	parent(string c)
	{
		car=c;
	}
};
class child_1:public parent{
	public:
		child_1(string c):parent(c)
		{
			
		}
		void diaplay()
		{
			cout<<"child_1 extends car name of parent: "<<car<<endl;
		}
	
};
class child_2:public parent{
		public:
		child_2(string c):parent(c)
		{
			
		}
		void show()
		{
			cout<<"child_2 extends car name of parent: "<<car<<endl;
		}
	
};
main()
{
	child_2 c2("BMW");
	c2.show();
}