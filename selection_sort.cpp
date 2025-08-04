#include<iostream>
using namespace std;
int main()
{
	int a[5],ele,i,j,temp;
	ele=sizeof(a)/sizeof(a[0]);
	cout<<"enter no"<<endl;
	for(i=0;i<ele;i++)
	cin>>a[i];
	cout<<"before "<<endl;
	for(i=0;i<ele;i++)
	cout<<" "<<a[i];
	
	for(i=0;i<ele-1;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"after "<<endl;
	for(i=0;i<ele;i++)
	cout<<" "<<a[i];	
}
