#include<iostream>
using namespace std;
int main()
{
	char s[20],d[20];
	int i;
	cout<<"enter string"<<endl;
	cin>>s;
	for(i=0;s[i]>=0;d[i]=s[i],i++);
	cout<<"dest = "<<d;
	
}
