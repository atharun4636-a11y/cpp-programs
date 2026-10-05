#include<iostream>
using namespace std;
class father{
	public:
		string surname;
		father(string sn)
		{
			surname=sn;
		}
};
class mother
{
	public:
		string blgrup;
		mother(string bg)
		{
			blgrup=bg;
		}
};
class child:public father,public mother{
	public:
		child(string sn,string bg):father(sn),mother(bg)
		{
		}
		void display()
		{
			cout<<"mother and father properties to child class are:"<<surname<<" "<<blgrup;
		}
};
main()
{
	child c("ABC","O+vE");
	c.display();
}