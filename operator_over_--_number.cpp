#include<iostream>
using namespace std;
class A{
	int x;
	public:
		A(){
		}
		A(int a){
			x=a;
		}
		A operator -(A &temp)
		{
			A res;
			res=x-temp.x;
			return res;
		}
	    void print()
	    {
	    	cout<<"substraction: "<<x<<endl;
		}	
};
int main()
{
	A obj(20),obj2(10),obj3;
	obj3=obj-obj2;
	obj3.print();	
}
