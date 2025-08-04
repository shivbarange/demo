#include<iostream>
using namespace std;
class A
{
int x,y;
public:
A(int a,int b){
	x=a,y=b;
}	
void get_data()
{
	cout<<"x="<<x<<" y="<<y<<endl;
}
};
class B:public A
{
	int x,y,z;
	public:
B(int a,int b,int c):A(a,b){
	x=a,y=b,z=c;
}	
void get_data()
{
	cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
}
};
int main()
{
	A obj(10,20);
	obj.get_data();
	B obj1(10,20,30);
	obj1.get_data();
	cout<<"*****************"<<endl;
	obj=obj1;
	obj.get_data();
	
	
}


