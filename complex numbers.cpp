#include<iostream>
using namespace std;
class complex
{
public:
	int real;
	int imag;
	complex(int r=0,int i=0)
	{
		real=r;
		imag=i;
	}
	complex operator+(complex c)
	{
		complex temp;
		temp.real=real+c.real;
		temp.imag=imag+c.imag;
		return temp;
	}
};
int main()
{
	complex c1(3,2);
	complex c2(5,6);
	complex c3;
	c3=c1+c2;
	cout<<"First complex number = "
        <<c1.real<<"i"<<c1.imag<<"i"<<endl;
	
}