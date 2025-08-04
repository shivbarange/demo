#include<iostream>
using namespace std;
class A
{
mutable int x;
int y;
public:
void set_data()
{
cout<<"enter x,y"<<endl;
cin>>x>>y;	
}	
void get_data() const
{
	x=200;
cout<<"x="<<x<<" y="<<y<<endl;	
}		
};
int main()
{
	A obj;
	obj.set_data();
	obj.get_data();
}
