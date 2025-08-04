//dead_lock
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

std::mutex m1;
std::mutex m2;

void thread1()
{
	m1.lock();
	std::this_thread::sleep_for(std::chrono::seconds(1));
	m2.lock();
	cout<<"critical section in thread1"<<endl;
	m1.unlock();
	m2.unlock();
}
void thread2()
{
	m2.lock();
	std::this_thread::sleep_for(std::chrono::seconds(1));
	m1.lock();
	cout<<"critical section in thread2"<<endl;
	m1.unlock();
	m2.unlock();
}

int main()
{
	std::thread t1(thread1);
	std::thread t2(thread2);
	t1.join();
	t2.join();
}
