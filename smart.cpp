#include<iostream>
using namespace std;
class smartptr
{
	int *data;
	public:
	explicit smartptr(int *p=nullptr)
	{
		data=p;
	}
	~smartptr()
	{
		delete data;
	}
	int& operator *()
	{
		return *data;
	}		
};
int main()
{
	int *p=new int(10);
	
	smartptr obj= smartptr(p);
	cout<<*obj<<endl;
	return 0;
}
