#include<iostream>
using namespace std;
class A
{
	static int a;
	public:
		static void show()
		{
			cout<<"a value is:"<<a<<endl;
		}
};
int A::a=100;
int main()
{
	A::show();	
}
