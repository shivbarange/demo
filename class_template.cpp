#include<iostream>
using namespace std;
template<class t,class t1>
class A
{
	t a;
	t1 b;

	public:
	A()
	{
		cout<<"constructor call"<<endl;	
	}	
	void set_data()
	{
		cout<<"enter data"<<endl;
		cin>>a>>b;	
	}	
	void get_data()
	{
		cout << "Enter data is :" << a <<" "<< b << endl;
	}
	
};

int main()
{
	A<int,string>tm;
	tm.set_data();
	tm.get_data();	
}





