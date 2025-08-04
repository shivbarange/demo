#include<iostream>
using namespace std;
int main()
{
	int x,y,res;
	char ch;
	cout<<"enter x"<<endl;
	cin>>x;
	cout<<"enter y"<<endl;
	cin>>y;
	cout<<"enter your choice:A/D/S/M"<<endl;
	cin>>ch;
	
	switch(ch)
	{
	case'A':
		res=x+y;
		break;
	case'D':
		res=x/y;
		break;
	case'S':
		res=x-y;
		break;
	case'M':
		res=x*y;
		break;
	default:
		cout<<"unknown option"<<endl;
		break;
	}
		cout<<"res:"<<res<<endl;	
}
