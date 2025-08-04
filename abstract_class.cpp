#include<iostream>
using namespace std;
class animal{
	public:
		virtual void sound()=0;
};
class cat:public animal{
	public:
		void sound()
		{
			cout<<"miau"<<endl;
		}
};
class dog:public animal{
	public:
		void sound()
		{
			cout<<"bhou"<<endl;
		}
};

int main()
{
	cat c;
	c.sound();
	
	dog d;
	d.sound();
}
