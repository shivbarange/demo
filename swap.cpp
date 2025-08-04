#include<iostream>
using namespace std;

int main()
{
	int i,j,t;
	cout<<"enter i"<<endl;
	cin>>i;
	cout<<"enter j"<<endl;
	cin>>j;
	cout<<"Before i="<<i<<"j="<<j<<endl;
	
	i=i+j;
	j=i-j;
	i=i-j;
	
	cout<<"after i="<<i<<" j="<<j<<endl;
	
}
