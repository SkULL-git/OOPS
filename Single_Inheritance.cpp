#include<iostream>
using namespace std;

class Parent{
	public:
		void displayParent(){
			cout<<"This is Parent Class"<<endl;
		}
};

class Child: public Parent{
	public:
		void displayChild(){
			cout<<"This is Child Class"<<endl;
		}
};

int main()
{
	Child c;
	
	c.displayParent();
	c.displayChild();
	
	return 0;
}
