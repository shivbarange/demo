#include<iostream>
using namespace std;

class A
{
	int x,y;
	public:		
	A()
	{
	}	
	A(A &t)
	{
		x=t.x;
		y=t.y;
		cout<<"copy constructor"<<endl;
	}
	void set_data(int a,int b)
	{
		x=a,y=b;
	}
	void show(void)
	{
		cout<<"x="<<x<<" y="<<y<<endl;
	}	
};

int main()
{
	A obj;
	obj.set_data(10,20);
	A obj1(obj);
	obj1.show();
}
