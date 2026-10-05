#include<iostream>
using namespace std;

class student{
	protected : int balance;
};
class account : public student{
	public:
		void getbalance(int b){
			balance=b;
		}
		void display(){
			cout<<"balance : "<<balance;
		}
};
int main(){
	account s;
	s.getbalance(10000);
	s.display();
}