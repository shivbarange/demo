#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<list>
using namespace std;
int main()
{
	list<int>numbers={20,45,28,56,1,5};
	for(int number:numbers)
	cout<<number<<" ";
	cout<<endl;
	
//	numbers.sort();
//	cout<<"after sort"<<endl;
//	for(int number:numbers)
//	cout<<number<<" ";

	numbers.erase(numbers.begin()+1)
	for(int number:numbers)
	cout<<number<<" ";
	
}
