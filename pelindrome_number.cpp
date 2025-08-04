#include<iostream>
using namespace std;

int main()
{
	int num,temp,rev=0,rem;
	//cout<<"enter num"<<endl;
	//cin>>num;
	
	for(num=10;num<=200;num++)
{

	temp=num;
	rev=0;
	
	while(temp)
	{
		rem=temp%10;
		temp=temp/10;
		rev=rev*10+rem;		
	}
	if(rev==num)
	cout<<"pelindrome "<<num<<endl;
	
}
}
