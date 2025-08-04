#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter x and y"<<endl;
	cin>>x>>y;
	
	try{
		if(y==0)
		throw "devide with zero";
		cout<<"result:"<<x/y<<endl;
	}
	catch(const char*msg){
		cout<<"exception "<<msg<<endl;
	}
	
}
