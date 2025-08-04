#include<iostream>
#include<tuple>
using namespace std;

tuple<string, int> return_string_and_int() 
{
  return make_tuple("Hello, world!", 10);
}
int main()
{
tuple<string, int> result = return_string_and_int();
string my_string = get<0>(result);
int my_int = get<1>(result);
cout<<my_string<<endl;
cout<<my_int<<endl;
}

