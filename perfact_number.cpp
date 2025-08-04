#include<iostream>
using namespace std;
int main()
{
	int i,num,div=0;
	cout<<"enter num"<<endl;
	cin>>num;
	
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		div=div+i;
	}
	if(div==num)
	cout<<"perfact"<<endl;
	else
	cout<<"not"<<endl;	
}
