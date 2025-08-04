#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s1 ="dcba";
	string s2 ="acbd";
	int i,l1,l2;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	l1=s1.length();
	l2=s2.length();
	if (l1!=l2)
	cout<<"not anagram"<<endl;
	for(i=0;s1[i];i++)
	{
		if(s1[i]!=s2[i])
		break;
	}
	if(s1[i]==s2[i])
	{
		cout<<"anagram"<<endl;
	}
	else
	cout<<"not anagram"<<endl;
	
}
