#include<iostream>
using namespace std;

class base{
	public:
		int fun(){
			cout<<"Base::fun()called"<<endl;
		}
		int fun(int i){
			cout<<"Base::fun()called"<<i<<endl;
		}
};

class derived{
	public:
		int fun(int i){
			cout<<"Derived::fun()called\n"<<i<<endl;
		}
};

int main()
{
	derived d;
	d.fun(5);
	
	return 0;
	
}
