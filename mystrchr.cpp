#include<iostream>
using namespace std;
void* mystrchr(const char*,char);
int main()
{
	int r;
	char s[20],ch;
	cout<<"enter string"<<endl;
	cin>>s;
	cout<<"enter ch"<<endl;
	cin>>ch;
	r=mystrchr(s,ch);
	cout<<"r = "<<r<<endl;	
}
void* mystrchr(const char*p,char ch)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]==ch)
		{
		return p+i;
		}
		return 0;
}
}
