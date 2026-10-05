#include<iostream>

namespace a{
	int x=100;
	void display(){
		std::cout<<x;
	}
}
int main(){
	a::display();
}