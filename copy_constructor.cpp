#include<iostream>
using namespace std;

class A
{
int x;
int y;


public:
A(int,int);
	void get_data(void)
	{
		cout<<"x="<<x<<" y="<<y<<endl;
	}
			
};

A::A(int a,int b)
	{
		x=a;
		y=b;
		cout<<"para cons"<<endl;
	}
int main()
{
	A obj(10,20);
	
	obj.get_data();
}





