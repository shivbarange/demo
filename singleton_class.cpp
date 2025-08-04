#include<iostream>
using namespace std;
class singleton
{
static bool instanceFlage;
static singleton *single;
singleton()
{
//private constructor
}	
public:
static singleton *getinstance();
void method();
~singleton()
{
	instanceFlage=false;
	}		
};
bool singleton::instanceFlage=false;
singleton*singleton::single=NULL;
singleton*singleton::getinstance()
{
	if(!instanceFlage)
	{
		single=new singleton;
		instanceFlage=true;
		return single;
	}
	else
	{
		return single;
	}
}
void singleton::method()
{
	cout<<"method of the singleton class"<<endl;
}
int main()
{
	singleton *sc1,*sc2;
	sc1=singleton::getinstance();
	sc1->method();
	sc2=singleton::getinstance();
	sc2->method();
	
}





