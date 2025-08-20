#include<iostream>
using namespace std;

class Grandparent{
	public:
		void displayGrand(){
			cout<<"This is Grandparent Class"<<endl;
		}
};

class Parent : public Grandparent{
	public:
		void displayParent(){
			cout<<"This is Parent Class"<<endl;
		}
};

class Child : public Parent{
	public:
		void displayChild(){
			cout<<"This is Child Class"<<endl;
		}
};

int main()
{
	Child obj;
	
	obj.displayGrand();
	obj.displayParent();
	obj.displayChild();
	
	return 0;
}
