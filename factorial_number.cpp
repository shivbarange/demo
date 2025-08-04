#include<iostream>
using namespace std;

int main()
{
	int fact=1,num;
	cout<<"enter num"<<endl;
	cin>>num;
	
	while(num)
	{
		fact=fact*num;
		num--;
	}
	
	cout<<"factorial = "<<fact<<endl;
}
