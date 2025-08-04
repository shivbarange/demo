#include<iostream>
using namespace std;
class A{
	public:
	 	virtual void f1(){
			cout<<"f1 in A"<<endl;
		}
		 void f2(){
			cout<<"f2 in A"<<endl;
		}
		virtual void f3(){
			cout<<"f3 in A"<<endl;
		}		
};
class B:public A{
	public:
		void f1(){
			cout<<"f1 in B"<<endl;
		}
		virtual void f2(){
			cout<<"f2 in B"<<endl;
		}
		void f3(){
			cout<<"f3 in B"<<endl;
		}		
};
class C:public B{
	public:
		void f1(){
			cout<<"f1 in C"<<endl;
		}
		void f2(){
			cout<<"f2 in C"<<endl;
		}
		void f3(){
			cout<<"f3 in C"<<endl;
		}		
};

int main()
{
	cout<<sizeof(A)<<endl;
	A *ptr;
	B b1;
	C c1;
	ptr=&c1;
//	ptr=&b1;
	ptr->f1();
	ptr->f2();
	ptr->f3();
}
