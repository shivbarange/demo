#include<iostream>
#include<memory>
using namespace std;
class A
{
	int x;
	public:
		A(int a)
		{
			x=a;
		}
		int getX()
		{
			return x;
		}
		~A()
		{
			cout<<"destr"<<endl;
		}
};
int main()
{
//	A *p=new A(10);
//	cout<<p->getX();
	unique_ptr<A> p(new A(10));
	cout<<p->getX()<<endl;
	return 0;

}
