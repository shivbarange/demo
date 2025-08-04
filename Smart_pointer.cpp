#include<iostream>
using namespace std;
class person
{
	const char *name;
	int age;
	public:
		person(){}
		person(const char *n,int a)
		{
			name=n;
			age=a;
		}
		void get_person()
		{
			cout<<"name "<<name<<endl;
			cout<<"age "<<age<<endl;
		}
};
class smartptr
{
	person *ptr;
	public:
		smartptr(){}
		smartptr(person*p)
		{
			ptr=p;
		}
		person *operator->()
		{
			return ptr;
		}
		~smartptr()
		{
			delete ptr;
			cout<<"destr"<<endl;
		}	
};
int main()
{
	{
		smartptr sp1(new person("abc",23));
		sp1->get_person();
	}
	{
		smartptr sp2(new person("xyz",23));
		sp2->get_person();
	}
	
}
