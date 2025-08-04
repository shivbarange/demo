#include<iostream>
using namespace std;
class A{
	int x;
	int y;
	public:
		A(){}
		A(int a,int b)
		{
			x=a,y=b;
		}
		void getdata()
		{
			cout<<x<<" "<<y<<endl;
		}
};
class B:public A
{
	int m;
	int n;
	public:
		B(){}
		B(int a,int b,int c,int d):A(a,b)
		{
			m=c,n=d;
		}
};
int main()
{
	A a1;
	B b1(10,20,30,40);
	a1=b1;//object slicing happen
	a1.getdata();
}
