#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int> s ={28,3,56,87,24,1};
	
	for(auto it=s.begin();it!=s.end();it++)
	cout<<"set : "<<*it<<endl;
	
	
	
}
