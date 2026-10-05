#include<iostream>
using namespace std;

class student{
	public:
		int mark;
	public:
	void grtmark(int m){
		mark=m;
	}
};
int main(){
	student s;
	s.grtmark(85);
	cout<<"marks = "<<s.mark;
}
