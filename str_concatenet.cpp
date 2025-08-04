#include<iostream>
using namespace std;
int main()
{
	char s1[20],s2[20];
	int i,j;
	cout<<"enter s1"<<endl;
	cin>>s1;
	cout<<"enter s2"<<endl;
	cin>>s2;
	
	for(i=0;s1[i];i++);
	for(j=0;s2[j];j++)
	{
		s1[i++]=s2[j];
	}
	cout<<s1<<endl;
	
}
