#include<iostream>
using namespace std;
class sample{
	public:
	template <class T,class U>
	T maxvalue(T a,U b)
	{
		return (a>b)? a:b;
	}
};
main()
{
	sample s;
	cout<<"max integer value is:"<<s.maxvalue(2,3)<<endl;
	cout<<"max float value is:"<<s.maxvalue(2.5f,3.5f)<<endl;
	cout<<"max double value is:"<<s.maxvalue(2.5,3.5)<<endl;
	cout<<"max char value is:"<<s.maxvalue('a','A')<<endl;
}