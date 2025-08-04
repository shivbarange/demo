#include<iostream>
using namespace std;
int main()
{
	int i,ele,a[5];
	cout<<"enter ele"<<endl;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	cin>>a[i];
	
int	big=a[0];
	
	for(i=1;i<ele;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}	
	}
cout<<"big="<<big<<endl	;
	
	
	
}
