#include<iostream>
using namespace std;
int findmissing(int arr1[],int size1,int arr2[],int size2)
{
	int sum1=0;
	int sum2=0;
	
	for(int i=0;i<size1;i++)
	sum1=sum1+arr1[i];
	
	for(int i=0;i<size2;i++)
	sum2=sum2+arr2[i];
	
	return sum1-sum2;
}

int main()
{
	int arr1[]={1,2,3,4,5,6};
	int arr2[]={1,2,3,5,6};
	
	int size1=sizeof(arr1)/sizeof(arr1[0]);
	int size2=sizeof(arr2)/sizeof(arr2[0]);
	
	int n=findmissing(arr1,size1,arr2,size2);
	
	cout<<"missing:"<<n<<endl;
}