#include<iostream>
using namespace std;
class parent{
	public:
		string mandal;
		int pincode,phno;
		parent(string s,int p,int n)
		{
			pincode=p;
			phno=n;
			mandal=s;
		}
};
class child : public parent
{
	public:
	child(string s,int p,int n):parent(s,p,n)
	{
		
	}
	void display()
	{
		cout<<"mandal is:"<<mandal<<endl;
		cout<<"pincode is:"<<pincode<<endl;
		cout<<"phno is:"<<phno;
	}
};
main()
{
	child c("rajupalem",516352,12345);
	c.display();
}