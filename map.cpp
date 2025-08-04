#include <iostream>
#include <map>
using namespace std;
int main ()
{
map<string,int> map1;
/* creates a map with keys of type string and values of type integer */
map1["abc"]=100; // inserts key = "abc" with value = 100
map1["b"]=200; // inserts key = "b" with value = 200
map1["c"]=300; // inserts key = "c" with value = 300
map1["def"]=400; // inserts key = "def" with value = 400
map<string,int> map2 (map1.begin(), map1.end());
/* creates a map map2 which have entries copied from map1.begin() to map1.end()
*/
map<string,int> map3 (map1);
/* creates map map3 which is a copy of map1 m */
cout<<"Map1:"<<endl;
for(map<string,int>::iterator i=map1.begin();i!=map1.end();i++)
{ 
cout<<i->first<<" ";
cout<<i->second<<endl;
}
cout<<"Map2:"<<endl;
for(map<string,int>::iterator i=map2.begin();i!=map2.end();i++)
{
cout<<i->first<<" ";
cout<<i->second<<endl;
}
cout<<"Map3:"<<endl;
for(map<string,int>::iterator i=map3.begin();i!=map3.end();i++)
{
cout<<i->first<<" ";
cout<<i->second<<endl;
}
}

