#include<iostream>
using namespace std;

int main()
{
	int i,num;
	cout<<"enter num"<<endl;
	cin>>num;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		break;
	}
	if(num==i)
	cout<<"prime"<<endl;
	else 
	cout<<"not prime"<<endl;
	
}
