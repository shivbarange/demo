//#include<stdio.h>
//main()
//{
//	char s[20],*p;
//	int i;
//	printf("enter the string\n");
//	scanf("%s",s);
//	p=s;
//	for(i=0;p[i];i++);
//	printf("length %d\n",i);
//}

#include<iostream>
using namespace std;
int main()
{
	char s[20],*p;
	int i;
	cout<<"enter the string"<<endl;
	cin>>s;
	p=s;
	for(i=0;p[i];i++);
	cout<<"length "<<i<<endl;
}
