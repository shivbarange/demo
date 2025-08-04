#include<iostream>
using namespace std;

int main()
{
	int a[5],i,j,ele,temp;
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
	
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
				
			}	
		}
	}
	
	cout<<"after sort"<<endl;
	for(i=0;i<ele;i++)
	cout<<a[i]<<endl;
	
}
