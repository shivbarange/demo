#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		A()
		{
			x=10;
		}
		A operator ++()
		{
			A temp;
			temp.x = ++x;
			return temp;
		}	
		A operator ++(int)
		{
			A temp;
			temp.x = x++;
			return temp;
		}
	void show()
	{
		cout<<"x :"<<x<<endl;
	}	
};

int main()
{
	A obj,res;
	res=++obj;
	obj.show();
	res=obj++;
	obj.show();	
}
