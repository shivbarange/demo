#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<list>
using namespace std;
int main()
{
//	map<int,int>m;
//	m.insert(pair<int,int>(1,10));
//	m.insert(pair<int,int>(2,20));
//	m.insert(pair<int,int>(3,30));
//	m.insert(pair<int,int>(4,40));
//	m.insert(pair<int,int>(,50));
//	map<int,int>:: iterator it;	
//	for(it=m.begin();it!=m.end();it++)
//	cout<<"key = "<<it->first<<" , value = "<<it->second<<endl;
	
//	multiset<char> s = {'S','H','I','V','S','H'};
//	for(auto it=s.begin();it!=s.end();it++)
//	cout<<*it<<" ";
	
//	vector<int>v;
//	for(int i=0;i<10;i++)
//	v.push_back(i);
//	for(int i=0;i<10;i++)
//	cout<<v[i]<<" ";
//	cout<<endl;

	list<int>numbers = {14,45,64,1,99};
	for(int number:numbers)
	cout<<number<<" ";
	cout<<endl;
	
	numbers.push_front(15);
	numbers.push_back(15);
	numbers.insert(numbers.begin(),23);
//	numbers.pop_back();
//	numbers.pop_front();
	
//	numbers.sort();
//	numbers.erase(numbers.begin());
	
	for(int number:numbers)
	cout<<number<<" ";
	
	
	
	
	
	
	
}
