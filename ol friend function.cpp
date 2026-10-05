#include<iostream>
using namespace std;
class money{
	int rupees;
public:
	money(int r=0):rupees(r){ }
	friend money operator+(money a,money b);
	void display()
	{
		cout<<"Rs."<<rupees;
	}
};
money operator+(money a,money b){
	money temp;
	temp.rupees=a.rupees +b.rupees;
	return temp;
}
main()
{
	money m1(15),m2(25),m3;
	m3=m1+m2;
	m3.display();
}