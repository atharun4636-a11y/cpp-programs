#include<iostream>
using namespace std;
template <class T>
class sample{
	public:
	T data;
	sample(T x)
	{
		data=x;
	}
	void display()
	{
		cout<<"Thre value is:"<<data<<endl;
	}
};
main()
{
	sample<int> s1(10);
	sample<double> s2(10.0);
	sample<string> s3("hello cpp");
	s1.display();
	s2.display();
	s3.display();
}