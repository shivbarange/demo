#include<iostream>
using namespace std;

auto add=[](auto a,auto b){return a+b;};
int main()
{
	
	
	int a=10,b=20;
	string s1="Shiv";
	string s2="shankar";
	
	cout<<add(a,b)<<endl;
	cout<<add(s1,s2)<<endl;
}
