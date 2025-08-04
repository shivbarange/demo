#include<iostream>
#include<cstring>
using namespace std;
class A
{
public:
A() {}
A(const char *str) {strcpy(s,str);}
A(const A&str)	{strcpy(s,str.s);}
	
A operator+(const A &str)
{
	A temp;
	strcat(temp.s,s);
	strcat(temp.s,str.s);
	return temp;	
}
friend main();
private:
char s[100];
	
};
int main()
{
	A obj("shiv"),obj1("shankar");
	A obj2=obj+obj1;
	cout<<obj2.s<<endl;	
}
