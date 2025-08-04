#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char s[20];
	cout<<"enter string"<<endl;
	cin>>s;
	
	for(i=0;s[i];i++);
	for(i=i-1,j=0;i>0;i--,j++)
	{
		if(s[i]!=s[j])
		break;
	}
	if(s[i]==s[j])
	cout<<"pelindrome"<<endl;
	else
	cout<<"not"<<endl;
}
