#include<iostream>
using namespace std;

class s
{
	public:
	int a;
	char ch;
	
	 void print()
	{
		cout<<"in s"<<endl;
	}
	

};

class s1:public s
{
	public:
	int x;
	int y;
	
	void print()
	{
		cout<<"in s1"<<endl;
	}
	
};

int main()
{
	
	s *p;
	s1 obj;
	p = &obj;
	obj.print();
	
	p->print();
	
	 
	
	
	
}
