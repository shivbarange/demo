#include<iostream>
using namespace std;
int main()
{
	int num,temp,rem,sum=0;
	for(num=100;num<=999;num++)
	{
	temp=num;
	sum=0;
	while(temp)
	{
		rem=temp%10;
		temp=temp/10;
		sum=sum+rem*rem*rem;
	}
	if(sum==num)
	cout<<num<<endl;
    }
	
}
