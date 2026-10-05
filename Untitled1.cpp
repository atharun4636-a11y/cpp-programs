#include<iostream>
using namespace std;
class animal
{
	protected:
		string sound;
};
class dog:public animal
{
	public:
		void display(string s)
		{
			sound=s;
			cout<<"makes sound";
		}
};
main()
{
	dog d;
	d.display("yes");
}