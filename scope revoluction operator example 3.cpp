#include<iostream>
using namespace std;

class display{
	public:
	 static int a;
};
int display::a=20;
int main(){
	cout<<display::a;
}