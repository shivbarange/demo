#include<iostream>
using  namespace std;

class base
{
	public:
		
	virtual void display()
	{
		cout<<"in base"<<endl;
	}
	
};

class derived:public base
{
	public:
		int x;
		int y;
	void display()
	{
		cout<<"in derived"<<endl;
		cout<<"x="<<x<<"y="<<y<<endl;
	}
};

int main()
{
	base *bptr;
	derived obj;
	obj.x=10;
	obj.y=20;
	bptr = &obj;
	bptr->display();	
}
