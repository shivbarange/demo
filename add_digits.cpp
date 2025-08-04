#include<stdio.h>

int main()
{
	
	int num,num1,sum;
	printf("enter num\n");
	scanf("%d",&num);
	while(1)
	{
	for(num1=num,sum=0;num1;num1=num1/10)
	sum=sum+num1%10;	
	}
//	for(num1=num,sum=0;num1;num1=num1/10)
//	sum=sum+num1%10;
	printf("sum=%d\n",sum);
}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int num,rem,temp,sum=0;
//	cout<<"enter num"<<endl;
//	cin>>num;
//	
//	temp=num;
//	while(temp)
//	{
//		rem=temp%10;
//		temp=temp/10;
//		sum=sum+rem;
//	}
//	cout<<sum<<endl;
//}
