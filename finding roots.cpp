#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,c,d;
	cout<<"enter coefficients:";
	cin>>a>>b>>c;
	d=(b*b)-4*a*c;
	
	if (d==0){
		cout<<"roots are equal:";
		cout<<(-b/2*a)<<","<<(-b/2*a);
	}
	else if(d>0){
		cout<<"roots are real :";
		cout<<(-b+sqrt(d))/2*a<<","<<(-b-sqrt(d))/2*a;
	}
	else{
		float x1;
		x1=(sqrt(-d))/2*a;
		cout<<"roots are imaginary :"<<endl;
		cout<<-b/2*a<<" + i "<<x1<<endl;
		cout<<-b/2*a<<" - i "<<x1;
	}
}