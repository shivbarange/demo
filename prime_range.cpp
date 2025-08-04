#include<iostream>
using namespace std;

int main()
{
	int i,num;
	
	for(int j=0;j<=100;j++)
    {
	num=j;
		for(i=2;i<num;i++)
	{
		if(num%i==0)
		break;
	}
	if(num==i)
	cout<<num<<endl;
	}
}
