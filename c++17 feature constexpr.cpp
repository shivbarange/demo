#include<iostream>
#include<string>
#include<type_traits>
using namespace std;

template<typename T>
auto length(T const& value)
{
	if constexpr(is_integral<T>::value){
		return value;
	}
	else{
		return value.length();
	}
}
int main()
{int n{10};
string s{"abc"};

cout<<"n= "<<n<<" and lenght= "<<length(n)<<endl;
cout<<"s= "<<s<<" and lenght= "<<length(s)<<endl;	
	
}
