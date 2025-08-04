#include<iostream>
#include<cstring>
using namespace std;

class shallow
{
	char *str;
	public:
		shallow()
		{
		}
		shallow(const char *p)
		{
			str=new char [strlen(p)+1];
			strcpy(str,p);
		}
		void modify()
		{
			str[0]='s';
		}
		void get_data()
		{
			cout<<str<<endl;
		}
};

int main()
{
	shallow s1("vector"),s2(s1);
	s1.get_data();
	s2.get_data();
	cout<<"after modify"<<endl;
	s1.modify();
	s1.get_data();
	s2.get_data();	
}
