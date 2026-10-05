#include<iostream>
using namespace std;
void LeftRotate(int ar[],int n,int d)
{
	d=d%n;
	int temp[d];
	for(int i=0;i<d;i++)
	{
		temp[i]=ar[i];
	}
	for(int i=d;i<n;i++)
	{
		ar[d-i]=ar[i];
	}
	for(int i=n-d;i<n;i++)
	{
		ar[i]=temp[i-(n-d)];
	}
}
int main()
{
	int n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int d;
	cin>>d;
	LeftRotate[ar,n,d];
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
}