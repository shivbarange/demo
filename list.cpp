#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> numbers = {10,28,5,43,1};
	
	cout<<"before list "<<endl;
	for(int number:numbers)
	cout<<number<<" ";
	
	numbers.reverse();
	
	cout<<"after reverse "<<endl;
	for(int number:numbers)
	cout<<number<<" ";
	
	numbers.sort();
	
	cout<<"after sort "<<endl;
	for(int number:numbers)
	cout<<number<<" ";
	
	numbers.sort();
	
	numbers.push_front(56);
	numbers.push_back(98);
	
	cout<<"after adding front and back "<<endl;
	for(int number:numbers)
	cout<<number<<" ";
	
	
	
}
