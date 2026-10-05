#include<iostream>
using namespace std;
class MinusNum
{
	public:
	int num;
	MinusNum(int n):num(n){ }
	MinusNum operator -()
	{
		return -num;
	}
	void display()
	{
		cout<<"Minus OPDoveraloading value is: "<<num;
	}
};
main()
{
	MinusNum n(10);
	MinusNum n1=-n;
	n1.display();
}