#include<iostream>
using namespace std;

int main()
{
	int num,pos;
	
	cout<<"enter num"<<endl;
	cin>>num;
	
	for(pos=31;pos>=0;pos--)
	cout<<(num>>pos&1);	
	
	
}
