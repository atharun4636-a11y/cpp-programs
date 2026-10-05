#include<iostream>
#include<algorithm>
using  namespace std;
string binaryconversion(int n)
{
	string res="";
	while(n!=1)
	{
		if( n % 2 ==1) 
			res+='1';
		else 
			res+='0';
	}
	reverse(res);
	return res;
}
main()
{
	int n;
	cin>>n;
	cout<<binaryconversion(7);
}