#include<iostream>
using namespace std;
class student {
	int roll;
public:
	void getData(int roll){
		this->roll = roll;
	}
	void display(){
		cout<< roll;
	}
};
int main()
{
	student s;
	s.getData(101);
	s.display();
}