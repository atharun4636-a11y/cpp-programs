#include<iostream>
using namespace std;

class student{
	private:
		int mark;
	public:
	void grtmark(int m){
		mark=m;
	}
	void displaymark(){
		cout<<"marks :"<<mark;
	}
};
int main(){
	student s;
	s.grtmark(85);
	s.displaymark();
}
