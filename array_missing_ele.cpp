#include<iostream>
#include<vector>
using namespace std;
int findmissing(vector<int> &arr1,vector<int> &arr2)
{
	int result=0;
	for(int num:arr1)
	result^=num;
	
	for(int num:arr2)
	result^=num;
	
	return result;
	
}

int main()
{
	vector<int> arr1={10,30,20,50,40};
	vector<int> arr2={10,20,50,40};
	int result;
	result=findmissing(arr1,arr2);
	cout<<result<<endl;
}
