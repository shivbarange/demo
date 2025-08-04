#include<iostream>
using namespace std;
class gamesetting{
	static gamesetting* _instance;
	int _width;
	int _height;
	gamesetting():_width(786),_height(1300){}
	public:
		static gamesetting* getinstance()
		{
			if(_instance==NULL)
			_instance=new gamesetting();
			return _instance;
		}
		void setwidth(int width){_width=width;}
		void setheigth(int height){_height=height;}
		
		int getwidth(){return _width;}
		int getheight(){return _height;}
		
		void displaysetting(){
			cout<<"width: "<<_width<<endl;
			cout<<"height: "<<_height<<endl<<endl;
		}	
};
gamesetting * gamesetting::_instance=NULL;
void somefunction(){
	gamesetting *setting = gamesetting::getinstance();
	setting->displaysetting();
}
int main()
{
	gamesetting *setting = gamesetting::getinstance();
	setting->displaysetting();
	setting->setwidth(500);
	somefunction();
	gamesetting obj;
	obj.displaysetting();
	return 0;
	
}
