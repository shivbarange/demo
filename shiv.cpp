#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int x,y,ret;
	cout<<"enter x"<<endl;
	cin>>x;
	abc:
		cout<<"enter y"<<endl;
		cin>>y;
		
		try{
			if(y==0)
			throw "devide with zero";
			else
			{
				ret=x/y;
				cout<<"ret :"<<ret<<endl;
			}
			
		}
		catch(const char *s)
			{
				cout<<"in catch: "<<s<<endl;
				goto abc;
			}
}
