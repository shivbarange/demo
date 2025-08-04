#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<pair<int,int>> v = {{1,2},{3,4},{5,6}} ;
	
	v.push_back(make_pair(7,8));
	
	for(int i=0;i<v.size();i++)
	cout<<v[i].first<<" "<<v[i].second<<endl;
	
	v.erase(v.begin()+3);
	
	cout<<"after delete "<<endl;
	
	for(int i=0;i<v.size();i++)
	cout<<v[i].first<<" "<<v[i].second<<endl;
	
}
