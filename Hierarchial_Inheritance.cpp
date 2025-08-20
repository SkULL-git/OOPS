#include<iostream>
using namespace std;

class Parent{
	public:
		void displayParent(){
			cout<<"This is Parent's Class"<<endl;
		}
};

class Child1 : public Parent{
	public:
		void displayChild1(){
		cout<<"This is Child1's Class"<<endl;
	}
};

class Child2 : public Parent{
	public:
		void displayChild2(){
		cout<<"This is Child2's Class"<<endl;
	}
};

int main()
{
	Child1 c1obj;
	Child2 c2obj;
	
	c1obj.displayParent();
	c1obj.displayChild1();
	
	c2obj.displayParent();
	c2obj.displayChild2();
	
	return 0;
}
