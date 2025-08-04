#include<iostream>
using namespace std;
class A
{
int x;
public:
 void test()
{
cout<<"test in base"<<endl;	
}	
};

class B:public A
{
int a;
public:
void test()
{
	cout<<"test in derived"<<endl;
}
};

int main()
{
	B b;
	b.test();
	b.A::test();
	
}
