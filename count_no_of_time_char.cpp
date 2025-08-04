#include<iostream>
using namespace std;
int main()
{
char s[20],ch;
int i, c;
cout<<"enter the string"<<endl;
cin>>s;
cout<<"enter the char"<<endl;
cin>>ch;

for(i=0,c=0;s[i];i++)
	{
	if(s[i]==ch)
	c++;
	}
	cout<<"count = "<<c<<endl;		
}
