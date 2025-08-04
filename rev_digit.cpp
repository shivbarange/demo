#include<iostream>
using namespace std;
int main()
{
	int num,num1,sum=0;
	cout<<"enter no"<<endl;
	cin>>num;	
//	for(num1=num;num1;num1=num1/10)
//	{
//		sum=sum+num1%10;
//	}
	num1=num;
	while(num1)
	{
		sum=sum*10+num1%10;
		num1=num1/10;	
	}	
	cout<<"rev is: "<<sum<<endl;	
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
//		sum=sum*10+rem;
//	}
//	cout<<sum<<endl;2
//}


