#include<iostream>
using namespace std;

class base
{
	public:
int x;
int y;

public:
 void display()
{
	cout<<"in base"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;	
	}
	void set_data(int a,int b)
	{
		x=a;
		y=b;
		
		}	
};

class derived:public base
{
int x;
int y;

public:
void display()
{
	cout<<"in derived"<<endl;
	
	}	
};

int main()
{
	
	base obj1;
//	obj1.x=10;
//	obj1.y=20;

obj1.set_data(10,20);
//	derived obj;
//	ptr=&obj;
//	ptr->display();

obj1.display();	


}

