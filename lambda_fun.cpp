#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v {1,2,3,4,5,6};
	for_each(v.begin(),v.end(),[](int n){
		cout<<n*n<<endl;
	});
}



//vector insert fun
//{
//	vector<int> v{23,12,5,42,6};
//	v.push_back(98);
//	v.insert(v.begin()+3,33);
//	for(auto it=v.begin();it!=v.end();it++)
//	cout<<*it<<endl;
//	
//}
