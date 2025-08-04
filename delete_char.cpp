#include<iostream>
using namespace std;
int main()
{
	char s[]="shivshankar";
	char ch;
	int i,j;
	cout<<"enter ch"<<endl;
	cin>>ch;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
			{
				s[j]=s[j+1];
			}
			i--;
		}
	}
	cout<<s<<endl;
	
}
