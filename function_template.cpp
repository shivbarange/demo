#include<iostream>
#include<cstring>
using namespace std;
template <class t,class t1>
double sum(t a,t1 b)
{
	return a+b;
}
int main()
{
	cout<<"sum="<<sum(10,20)<<endl;
	cout<<"sum="<<sum(10,25.6f)<<endl;
	return 0;	
}
