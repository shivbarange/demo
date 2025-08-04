#include<iostream>
using namespace std;
class A{
	public:
	static int count;
	
	A()
	{
		count++;
	}
	static getdata()
	{
		cout<<count<<endl;
	}	
};
int A::count=0;
int main()
{
	A obj,ob1,obj2,obj3,obj4,obj5;
	A::getdata();
	
}
