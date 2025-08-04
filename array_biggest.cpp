#include <iostream>
using namespace std;
int main()
{
	int i,ele,a[5],big;
	ele=sizeof(a)/sizeof(a[0]);
	cout<<"enter no"<<endl;
	for(i=0;i<ele;i++)
	cin>>a[i];
	
	big=a[0];
	
	for(i=0;i<ele;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}
	
	cout<<"big "<<big<<endl;
			
}
