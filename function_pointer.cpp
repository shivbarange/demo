#include<iostream>
using namespace std;
int sum(int x,int y)
{
	return x+y;
}
int main()
{
	int n1=20,n2=10,res;
	int(*p)(int,int)=&sum;
	res=(*p)(n1,n2);
	cout<<res<<endl;
}