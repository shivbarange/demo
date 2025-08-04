#include<iostream>
using namespace std;
int my_strcmp(const char*,const char*);
int main()
{
	int i,j,r;
	char s1[20],s2[20];
	cout<<"enter s1"<<endl;
	cin>>s1;
	cout<<"enter s2"<<endl;
	cin>>s2;
	r = my_strcmp(s1,s2);
	cout<<r<<endl;
	
}

int my_strcmp(const char*s1,const char*s2)
{
	int i,j;
	for(i=0;s1[i];i++)
	{
		if(s1[i]!=s2[i])
		break;
	}
	if(s1[i]==s2[i])
	return 0;
	else
	return s1[i]-s2[i];
	
}
