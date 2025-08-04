//try_lock()
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int counter = 0;
std::mutex mtx;

void increase100000times()
{
	for(int i=0;i<100000;i++)
	{
		if(mtx.try_lock())
		{
			counter++;
			mtx.unlock();	
		}
	}
}

int main()
{
	std::thread t1(increase100000times);
	std::thread t2(increase100000times);
	
	t1.join();
	t2.join();
	
	cout<<counter<<endl;
}
