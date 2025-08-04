#include<iostream>
using namespace std;

int main()
{
	int num,temp,sum=0,rem;
	cout<<"enter nu. "<<endl;
	cin>>num;
	
	temp=num;
	
	while(temp)
	{
		rem=temp%10;
		temp=temp/10;
		sum=sum+rem*rem*rem;		
	}
	if(sum==num)
	cout<<"armstrong"<<endl;
	else
	cout<<"not"<<endl;

}
