#include <iostream>
using namespace std;
[[deprecated("this fun will be replaced with template add function")]]
int add(int a,int b){return a+b;}
int main()
{
	cout<<add(1,2);
	return 0;
}
