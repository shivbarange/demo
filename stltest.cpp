#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<list>
using namespace std;
int main()
{
//	list<int>numbers={15,36,6,97,1,34};
	list<int>numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(5);
	numbers.push_back(3);
	numbers.push_back(4);
	for(int number:numbers)
	cout<<number<<" ";
	cout<<endl;
	
	numbers.sort();
	for(int number:numbers)
	cout<<number<<" ";
	cout<<endl;
	
	numbers.push_back(99);
	for(int number:numbers)
	cout<<number<<" ";
	cout<<endl;
	
	numbers.erase(numbers.begin(1));
	
	for(int number:numbers)
	cout<<number<<" ";
	cout<<endl;
	
}
