#include<iostream>
using namespace std;

class student{
	int rollno;
	string name;
	static string collage;
	public:
		
		void getdata(){
			cout<<"roll no:";
			cin>>rollno;
			cout<<"name";
			cin>>name;
		}
		void display(){
			cout<<rollno<<endl;
			cout<<name<<endl;
			cout<<collage<<endl;
		}
};
string student::collage="aditya";
int main(){
	student s1,s2;
	
	s1.getdata();
	s2.getdata();
	
	s1.display();
	s2.display();
}