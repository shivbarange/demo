#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return n*factorial(n-1);
}
int main()
{
	int number;
	cout<<"enter a positive num"<<endl;
	cin>>number;
	
	cout<<"factorial of "<<number<<" is "<<factorial(number)<<endl;
	return 0;
}