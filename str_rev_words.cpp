#include<iostream>
using namespace std;
int main()
{
	//char str[]="india is my country";
	char str[30];
	cout<<"enter string"<<endl;
	cin.getline(str,30);
	
	int length;
	while(str[length]!='\0')
	length++;
	
	for(int i=0;i<length/2;i++)
	{
		char temp= str[length-i-1];
		str[length-i-1]=str[i];
		str[i]=temp;	
	}
	cout<<"after rev="<<str<<endl;
	
	int start=0;
	for(int i=0;i<=length;i++)
	{
		if(str[i]==' '||str[i]=='\0')
		{
			int end=i-1;
			while(start<end)
			{
			char temp=str[start];
			str[start]=str[end];
			str[end]=temp;
			start++;
			end--;
			}
			start=i+1;			
		}	
		
	}
	cout<<"after rev word="<<str<<endl;
}
