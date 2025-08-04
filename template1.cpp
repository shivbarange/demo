#include<iostream>
#include<cstring>
using namespace std;
template<class t1,class t2>
auto getmax(t1 x,t2 y)
{
	return x>y?x:y;
}
int main()
{
	int x=10,y=20.5;
	cout<<getmax(10,20.5)<<endl;
	cout<<getmax(30.5,10)<<endl;
	char c1='a',c2='z';
	cout<<getmax(c1,c2)<<endl;
}