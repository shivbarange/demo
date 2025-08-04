#include<iostream>
#include<thread>
using namespace std;
void fun1(){
	cout<<"in fun1"<<endl;
	this_thread::sleep_for(chrono::seconds(5));
}
void fun2(){
	cout<<"in fun2"<<endl;
	this_thread::sleep_for(chrono::seconds(5));
}
int main()
{
//	fun1();
//	fun2();
	
	std::thread t1(fun1);
	std::thread t2(fun2);
	
	t1.join();
	t2.join();
	
	cout<<"complete"<<endl;	
}


