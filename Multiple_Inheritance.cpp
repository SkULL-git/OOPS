#include<iostream>
using namespace std;

class Father{
	public:
		void displayFather(){
			cout<<"This Father's Class"<<endl;
		}
};

class Mother{
	public:
		void displayMother(){
			cout<<"This is Mother's Class"<<endl;
		}
};

class Child : public Father, public Mother{
	public:
		void displayChild(){
			cout<<"This is Child's Class"<<endl;
		}
};

int main()
{
	Child obj;
	
	obj.displayFather();
	obj.displayMother();
	obj.displayChild();
	
	return 0;
}
