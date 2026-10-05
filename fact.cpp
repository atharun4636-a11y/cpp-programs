//factorial of a given number using recursion
#include<iostream>
using namespace std;
int fact(int);
int fact(int num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	else{
		return num*fact(num-1);
	}
}
int main()
{
	int n;
	cout<<"enter a n vaule:";
	cin>>n;
	cout<<"factorial of given"<<n<<"is: ",fact(n);
	return 0;
}