#include<iostream>
using namespace std;
class base
{
	public:
	virtual display()
	{
		cout<<"base class fn"<<endl;
	}
};
class derived:public base
{
	public:
	display()
	{
		cout<<"derived class fn"<<endl;
	}	
};
int main()
{	
	base *ptr;
	derived obj;
	ptr=&obj;
	ptr->display();
}
