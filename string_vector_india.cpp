#include<iostream>
using namespace std;

int main()
{
	int i,j,length;
	char str[30]="india is my country";
	char temp;
	for(i=0;str[i];i++);
	
	length=i;
	
	cout<<"length="<<length<<endl;
	
	for(i=0;i<length/2;i++)
	{
		temp=str[i];
		str[i]=str[length-i-1];
		str[length-i-1]=temp;	
	}
	
	cout<<"rev = "<<str<<endl;
	
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
	cout<<"finale = "<<str<<endl;
	
}
	
	
	
//	 int start = 0;
//    for (int i = 0; i <= length; i++) {
//        if (str[i] == ' ' || str[i] == '\0') {
//            int end = i - 1;
//
//            // Reverse the word
//            while (start < end) {
//                char temp = str[start];
//                str[start] = str[end];
//                str[end] = temp;
//                start++;
//                end--;
//            }
//
//            // Move to the next word
//            start = i + 1;
//        }
//    }
//cout<<"after str = "<<str<<endl;	
//	
//	

