//#include<iostream>
//using namespace std;
//int main()
//{
//	int num,i;
//	cout<<"enter num"<<endl;
//	cin>>num;
//	
//	for(i=2;i<num;i++)
//	{
//		if(num%i==0)
//		break;
//	}
//	if(num==i)
//	cout<<"prime"<<endl;
//	else
//	cout<<"not"<<endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,num,div=0;
//	cout<<"enter num"<<endl;
//	cin>>num;
//	
//	for(i=1;i<num;i++)
//	{
//		if(num%i==0)
//		div=div+i;
//	}
//	if(div==num)
//	cout<<"perfact"<<endl;
//	else
//	cout<<"not"<<endl;	
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int num,temp,rem,sum=0;
//	cout<<"enter num"<<endl;
//	cin>>num;
//	
//	temp=num;
//	while(temp)
//	{
//		rem=temp%10;
//		temp=temp/10;
//		sum=sum+rem*rem*rem;
//	}
//	if(sum==num)
//	cout<<"armstrong"<<endl;
//	else
//	cout<<"not"<<endl;	
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int num,temp,rem,rev=0;
//	cout<<"enter no"<<endl;
//	cin>>num;
//	
//	temp=num;
//	while(temp)
//	{
//		rem=temp%10;
//		temp=temp/10;
//		rev=rev*10+rem;
//	}
//	if(rev==num)
//	cout<<"pelindrome"<<endl;
//	else
//	cout<<"not"<<endl;	
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int num,fact=1;
//	cout<<"enter no"<<endl;
//	cin>>num;
//	
//	while(num)
//	{
//		fact=fact*num;
//		num--;
//	}
//	cout<<"fact:"<<fact<<endl;
//}


//#include<iostream>
//using namespace std;
//void mystrrev(char*);
//int main()
//{
//	char s[20];
//	cout<<"enter str"<<endl;
//	cin>>s;
//	
//	mystrrev(s);
//	cout<<"after:"<<s<<endl;
//}
//void mystrrev(char* str)
//{
//	int i,j,len=0;
//	while(str[len])
//	{
//		len++;
//	}
//	for(i=0,j=len-1;i<j;i++,j--)
//	{
//		char temp=str[i];
//		str[i]=str[j];
//		str[j]=temp;
//	}
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	char str[20];
//	int i,j,len=0;
//	cout<<"enter string"<<endl;
//	cin>>str;
//	
//	while(str[len])
//	{
//		len++;
//	}
//	for(i=0,j=len-1;i<j;i++,j--)
//	{
//		if(str[i]!=str[j])
//		break;
//	}
//	if(str[i]==str[j])
//	cout<<"pelindrome"<<endl;
//	else
//	cout<<"not"<<endl;	
//}

//#include<iostream>
//using namespace std;
//void mystrrev(char*);
//int main()
//{
//	char str[20],ch;
//	int i,j;
//	cout<<"enter string"<<endl;
//	cin>>str;
//	cout<<"enter ch"<<endl;
//	cin>>ch;
//	
//	for(i=0;str[i];i++)
//	{
//		if(str[i]==ch)
//		{
//			for(j=i;str[j];j++)
//			{
//				str[j]=str[j+1];
//			}
//			i--;
//		}		
//	}
//	cout<<str<<endl;	
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	char s1[20],s2[20];
//	int i,j;
//	cout<<"enter s1"<<endl;
//	cin>>s1;
//	cout<<"enter s2"<<endl;
//	cin>>s2;
//	
//	for(i=0;s1[i];i++);
//	for(j=0;s2[j];j++)
//	{
//		s1[i++]=s2[j];
//	}
//	cout<<"after:"<<s1<<endl;	
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	char str[20]="india is my country";
//	int i,j,len=0,start,end;
//	
//	while(str[len])
//	{
//		len++;
//	}
//	
//	for(i=0;i<len/2;i++)
//	{
//		char temp=str[len-1-i];
//		str[len-1-i]=str[i];
//		str[i]=temp;
//	}
//	
//	start=0;
//	for(i=0;i<=len;i++)
//	{
//		if(str[i]==' '||str[i]=='\0')
//		{
//			end=i-1;
//			while(start<end)
//			{
//				char temp=str[start];
//				str[start]=str[end];
//				str[end]=temp;
//				start++;
//				end--;
//			}
//			start=i+1;
//		}	
//	}
//	cout<<"after:"<<str<<endl;	
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//	int i,j,ele,big;
//	cout<<"enter arr elements"<<endl;
//	for(i=0;i<5;i++)
//	cin>>arr[i];
//	
//	for(i=0;i<5;i++)
//	cout<<arr[i]<<" ";
//	cout<<endl;
//	
//	ele=sizeof(arr)/sizeof(arr[0]);
//	
//	big=arr[0];
//	
//	for(i=0;i<ele;i++)
//	{
//		if(arr[i]>big)
//		big=arr[i];
//	}	
//	cout<<"biggest:"<<big<<endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//	int i,j,ele,small;
//	cout<<"enter arr elements"<<endl;
//	for(i=0;i<5;i++)
//	cin>>arr[i];
//	
//	for(i=0;i<5;i++)
//	cout<<arr[i]<<" ";
//	cout<<endl;
//	
//	ele=sizeof(arr)/sizeof(arr[0]);
//	small=arr[0];
//	for(i=0;i<ele;i++)
//	{
//		if(arr[i]<small)
//		small=arr[i];
//	}
//	cout<<"smallest:"<<small<<endl;	
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//	int i,j,ele,num;
//	cout<<"enter arr elements"<<endl;
//	for(i=0;i<5;i++)
//	cin>>arr[i];
//	
//	for(i=0;i<5;i++)
//	cout<<arr[i]<<" ";
//	cout<<endl;
//	
//	ele=sizeof(arr)/sizeof(arr[0]);
//	cout<<"enter num delete"<<endl;
//	cin>>num;
//	
//	for(i=0;i<ele;i++)
//	{
//		if(arr[i]==num)
//		{
//			for(j=i;j<ele;j++)
//			{
//				arr[j]=arr[j+1];
//			}
//			i--;
//			ele--;
//		}
//	}
//	cout<<"after deleting num:"<<endl;
//	for(i=0;i<ele;i++)
//	cout<<arr[i]<<" ";
//	cout<<endl;	
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//	int i,j,ele,num;
//	cout<<"enter arr elements"<<endl;
//	for(i=0;i<5;i++)
//	cin>>arr[i];
//	
//	for(i=0;i<5;i++)
//	cout<<arr[i]<<" ";
//	cout<<endl;
//	
//	ele=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<ele-1;i++)
//	{
//		for(j=0;j<ele-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//			}
//		}	
//	}
//	cout<<"after bubble sort"<<endl;
//	for(i=0;i<ele;i++)
//	cout<<arr[i]<<" ";
//	cout<<endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//	int i,j,ele,num;
//	cout<<"enter arr elements"<<endl;
//	for(i=0;i<5;i++)
//	cin>>arr[i];
//	
//	for(i=0;i<5;i++)
//	cout<<arr[i]<<" ";
//	cout<<endl;
//	
//	ele=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<ele-1;i++)
//	{
//		for(j=i+1;j<ele;j++)
//		{
//			if(arr[i]>arr[j])
//			{
//				int temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	cout<<"after selection sort"<<endl;
//	for(i=0;i<ele;i++)
//	cout<<arr[i]<<" ";
//	cout<<endl;	
//}

//#include<iostream>
//using namespace std;
//int findmissing(int a1[],int,int a2[],int);
//int main()
//{
//	int a1[]={10,20,30,40,50};
//	int a2[]={10,20,30,50};
//	int result;
//	int ele1=sizeof(a1)/sizeof(a1[0]);
//	int ele2=sizeof(a2)/sizeof(a2[0]);
//	result=findmissing(a1,ele1,a2,ele2);
//	cout<<result<<endl;
//}
//int findmissing(int a1[],int ele1,int a2[],int ele2)
//{
//	int i,res=0;	
//	for(i=0;i<ele1;i++)
//	res=res^a1[i];
//	
//	for(i=0;i<ele2;i++)
//	res=res^a2[i];
//	
//	return res;
//}

//*************************************************************//
//#include<iostream>
//using namespace std;
//class animal{
//	public:
//		virtual void sound()=0;	
//};
//class cat:public animal{
//	public:
//		void sound()
//		{
//			cout<<"miau"<<endl;
//		}
//};
//class dog:public animal{
//	public:
//		void sound()
//		{
//			cout<<"bhou"<<endl;
//		}	
//};
//int main()
//{
//	//animal obj;
////	cat obj;
////	obj.sound();
////	dog obj1;
////	obj1.sound();
//animal *ptr;
//dog d;
//ptr=&d;
//ptr->sound();
//}

//#include<iostream>
//using namespace std;
//template<class t1,class t2>
//class A{
//	t1 x;
//	t2 y;
//	public:
//		A()
//		{
//			cout<<"enter x"<<endl;
//			cin>>x;
//			cout<<"enter y"<<endl;
//			cin>>y;
//		}
//		void show()
//		{
//			cout<<x<<endl;
//			cout<<y<<endl;
//		}
//};
//int main()
//{
//	A<int,string>obj;
//	obj.show();
//}

//#include<iostream>
//using namespace std;
//class A{
//	mutable int x,y;
//	public:
//		void set_data()const{
//		x=10,y=20;
//		}
//		void get_data()
//		{
//			cout<<"x:"<<x<<" y:"<<y<<endl;
//		}	
//};
//int main()
//{
//	A obj;
//	obj.set_data();
//	obj.get_data();
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//class A{
//	int x;
//	char*str;
//	public:
//		A(){
//		cout<<"default cons"<<endl;
//		}
//		A(int a)
//		{
//			x=a;
//			cout<<"parameterized cons"<<endl;			
//		}
//		A(const char *p)
//		{
//			str=new char[strlen(p)+1];
//			strcpy(str,p);
//			cout<<"copy constructor"<<endl;	
//		}
//		void show()
//		{
//			cout<<"x:"<<x<<endl;
//			cout<<"str:"<<str<<endl;
//		}	
//};
//int main()
//{
//	A obj,obj1(20),obj2("shiv"),obj3(obj2);
//	obj1.show();
//	obj2.show();
//	obj3.show();
//	
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//class deep{
//	char *str;
//	public:
//		deep(const char*p)
//		{
//			str=new char[strlen(p)+1];
//			strcpy(str,p);
//		}
//		deep(deep&temp)
//		{
//			str=new char[strlen(temp.str)+1];
//			strcpy(str,temp.str);
//		}
//		void modify()
//		{
//			str[0]='s';
//		}
//		void show()
//		{
//			cout<<str<<endl;
//		}
//};
//int main()
//{
//	deep obj("vector"),obj1(obj);
//	obj.show();
//	obj1.show();
//	cout<<"**********************"<<endl;
//	obj.modify();
//	obj.show();
//	obj1.show();
//}

//#include<iostream>
//using namespace std;
//int sum(int x,int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int n1=10,n2=20,res;
//	int (*p)(int,int)=&sum;
//	res=(*p)(n1,n2);
//	cout<<res<<endl;
//}

//#include<iostream>
//using namespace std;
//template <class t1,class t2>
//double sum(t1 x,t2 y)
//{
//	return x+y;
//}
//
//int main()
//{
//	cout<<sum(10,20)<<endl;
//	cout<<sum(24.5,67.2)<<endl;
//}


//#include<iostream>
//using namespace std;
//class base{
//	public:
//		virtual void fun1()
//		{
//			cout<<"fun1 in base"<<endl;
//		}
//		void fun2()
//		{
//			cout<<"fun2 in base"<<endl;
//		}	
//};
//class derived:public base{
//	public:
//		void fun1()
//		{
//			cout<<"fun1 in derived"<<endl;
//		}
//		void fun2()
//		{
//			cout<<"fun2 in derived"<<endl;
//		}	
//};
//
//int main()
//{
//	base *bptr;
//	derived obj;
//	bptr=&obj;
//	bptr->fun1();
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//class shallow{
//	char*str;
//	public:
//		shallow(const char *p)
//		{
//			str=new char[strlen(p)+1];
//			strcpy(str,p);
//		}
//		void modify()
//		{
//			str[0]='s';
//		}
//		void show()
//		{
//			cout<<str<<endl;
//		}
//};
//int main()
//{
//	shallow obj("vector"),obj1(obj);
//	obj.show();
//	obj1.show();
//	cout<<"************"<<endl;
//	obj.modify();
//	obj.show();
//	obj1.show();
//}

//#include<iostream>
//using namespace std;
//class A
//{
//	static int x;
//	public:
//		static void show()
//		{
//			cout<<x<<endl;
//		 } 
//};
//int A::x=20;
//int main()
//{
//	A::show();
//	A obj;
//	obj.show();
//}

//#include<iostream>
//#include<map>
//using namespace std;
//int main()
//{
//	map<int,string>m;
//	m.insert(pair<int,string>(1,"shiv"));
//	m.insert(pair<int,string>(2,"vivek"));
//	m.insert(pair<int,string>(3,"shankar"));
//	m.insert(pair<int,string>(4,"raj"));
//	map<int,string>::iterator it;
//	for(it=m.begin();it!=m.end();it++)
//	cout<<it->first<<" "<<it->second<<endl;
// } 

//#include<iostream>
//#include<set>
//using namespace std;
//int main()
//{
//	set<int>s={28,59,1,95,27};
//	for(auto it=s.begin();it!=s.end();it++)
//	cout<<*it<<" ";
//	cout<<endl;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int>v;
//	for(int i=0;i<10;i++)
//	v.push_back(i);
//	
//	for(int i=0;i<10;i++)
//	cout<<v[i]<<" ";
//	cout<<endl;
//}

//#include<iostream>
//#include<list>
//using namespace std;
//int main()
//{
//	list<int>numbers{38,29,56,18,98};
//	for(int number:numbers)
//	cout<<number<<" ";
//	cout<<endl;
//	numbers.sort();
//	for(int number:numbers)
//	cout<<number<<" ";
//	cout<<endl;	
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	vector<int>v{28,59,18,45,03};
//	
//	sort(v.begin(),v.end());
//	for(int a:v)
//	cout<<a<<" ";	
//}

#include<iostream>
using namespace std;
class smartptr{
	int *data;
	public:
	smartptr(int *p)
	{
		data=p;
	}
	int& operator *()
	{
		return *data;
	}
	~smartptr()
	{
		cout<<data<<endl;
		delete data;
		cout<<"dest"<<endl;
	}	
};
int main()
{
	int *p=new int(20);
	smartptr(a)=p;	
}

