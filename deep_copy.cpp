#include<iostream>
#include<cstring>
using namespace std;

class deep
{
char*str;
public:
shallow(){
}	
deep(const char *p)
{
	str= new char[strlen(p)+1];
	strcpy(str,p);
}
deep(deep&temp)
{
	str=new char[strlen(temp.str)+1];
	strcpy(str,temp.str);
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
	deep s1("vector"),s2(s1);
	s1.get_data();
	s2.get_data();
	cout<<"after modify"<<endl;
	s1.modify();
	s1.get_data();
	s2.get_data();
}



