#include<iostream>
#include<algorithm>
using namespace std;
bool anagram(string ,string );
int main()
{
	string str1="shiv";
	string str2="csvi";
	bool res;
	res=anagram(str1,str2);
	if(res==true)
	cout<<"anagram"<<endl;
	else
	cout<<"not"<<endl;	
}

bool anagram(string str1,string str2)
{
	if(str1.length()!=str2.length())
	return false;
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	
	for(int i=0;i<str1.length();i++)
		if(str1[i]!=str2[i])
		return false;
		return true;	
}
