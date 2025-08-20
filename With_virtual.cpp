#include<iostream>
using namespace std;

class animal{
	public:
	virtual	void sound(){
			cout<<"Animal Sound"<<endl;
		}
	};

class dog : public animal{
	void sound (){
		cout<<"Dog Barks"<<endl;
	}
};
int main(){
	animal *a;
	dog d;
	a = &d;
	a->sound();
	
	return 0;
}
