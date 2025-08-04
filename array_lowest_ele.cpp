#include<iostream>
using namespace std;
int main()
{
	int a[5],i,low,ele;
	cout<<"enter ele"<<endl;
	for(i=0;i<5;i++)
	cin>>a[i];
	ele=sizeof(a)/sizeof(a[0]);
	
	low=a[0];
	
	for(i=0;i<ele;i++)	
	{
		if(a[i]<low)
		{
			low=a[i];
		}
	}
	cout<<"lowest ele is: "<<low<<endl;
}
