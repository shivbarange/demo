#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,int>m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(1,10));
	
	map<int,int>:: iterator it;
	for(it=m.begin();it!=m.end();it++)
	cout<<"key "<<it->first<<" "<<"value "<<it->second<<endl;	
}
