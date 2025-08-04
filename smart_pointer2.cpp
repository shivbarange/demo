#include<iostream>
using namespace std;
class smartptr
{
	int *data;
	public:
	smartptr(int *p)
	{
		data=p;	
	}	
	int& operator *()
	{
		return *data;
	}
	~smartptr()
	{
		delete data;
		cout<<"destru"<<endl;
	}
};
int main()
{
	int *p = new int(10);
	smartptr a=smartptr(p);
	cout<<*a<<endl;
	int *q = new int(20);
	smartptr b=smartptr(q);
	cout<<*b<<endl;
	int *r = new int(30);
	smartptr c=smartptr(r);
	cout<<*c<<endl;
	return 0;
}
