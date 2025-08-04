#include<iostream>
using namespace std;
int main()
{
	int a[]={13,45,25,25,67,58,27};
	int i,j,ele,num;
	ele=sizeof(a)/sizeof(a[0]);
	cout<<"before elements"<<endl;
	for(i=0;i<ele;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	cout<<"enter ele you want to delete"<<endl;
	cin>>num;
	
	for(i=0;i<ele;i++)
	{
		if(a[i]==num)
		{
			for(j=i;j<ele;j++)
			{
				a[j]=a[j+1];
			}
			i--;
			ele--;
		}		
	}
	cout<<"after delete"<<endl;
	for(i=0;i<ele;i++)
	cout<<a[i]<<" ";
	cout<<endl;	
}
