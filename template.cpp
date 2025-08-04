#include<iostream>
using namespace std;
template<class T>
class Sample
{
public:
void display(T a);
void display(T a,T b);
void display(T a,T b,T c);
};
template<class T>
void Sample<T>::display(T a)
{ cout<<"a="<<a<<endl;
}
template<class T>
void Sample<T>::display(T a,T b)
{
cout<<"a="<<a<<"b="<<b<<endl;
}
template<class T>
void Sample<T>::display(T a,T b,T c)
{
cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
}
int main()
{
Sample<int> obj1;
obj1.display(10);
obj1.display(10,20);
obj1.display(10,20,30);
Sample<double> obj2;
obj2.display(1.1);
obj2.display(1.1,2.2);
obj2.display(1.1,2.2,3.3);
Sample<string> obj3;
obj3.display("100");
}

