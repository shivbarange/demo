#include<iostream>
using namespace std;

int main()
{
	int a[5],ele,i;
	
	ele=sizeof(a)/sizeof(a[0]);
	
	cout<<"enter num"<<endl;
	
	for(i=0;i<ele;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<ele;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"reverse"<<endl;
	for(i=ele-1;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
}
