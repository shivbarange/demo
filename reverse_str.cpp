#include<iostream>
using namespace std;
void rev_str(char *);
int main()
{
	int i,j;
	char s[20],d[20];
	cout<<"enter string"<<endl;
	cin>>s;
//	for(i=0;s[i];i++);
//	for(i=i-1;s[i]>=0;i--,j++)
//	d[j] = s[i];
//	d[j] = '\0';	
//	cout<<"reverse = "<<d<<endl;

	rev_str(s);
	cout<<endl;
}
void rev_str(char *s)
{
	if(*s)
	{
		rev_str(s+1);
		cout<<*s;
	}
}
