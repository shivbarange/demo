#include<iostream>
using namespace std;
void mystrcat(char*,const char*);
int main()
{
	char s1[20],s2[20];
	
	cout<<"enter s1"<<endl;
	cin>>s1;
	cout<<"enter s2"<<endl;
	cin>>s2;
	mystrcat(s1,s2);
	cout<<"after s1 = "<<s1<<endl;
}

void mystrcat(char*p,const char*q)
{
	int i,j;
	for(i=0;i<p[i];i++);
	for(j=0;j<q[j];j++)
	{
		p[i++]=q[j];
	}
	p[i]='\0';
}
