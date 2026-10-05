#include<iostream>
using namespace std;

namespace cse{
	
	int a=10;
}
namespace ece{
	
	int a=20;
}
int main(){
	cout<<cse::a<<endl;
	cout<<ece::a;
}