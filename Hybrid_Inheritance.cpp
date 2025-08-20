#include<iostream>
using namespace std;

class A{
	public:
		void getA(){
			cout<<"Class A"<<endl;
		}
};

class B: virtual public A{
	public:
		void getB(){
			cout<<"Class B"<<endl;
		}
};

class C: virtual public A{
public:
void getC(){
	cout<<"Class C"<<endl;
}
};

class D:public B,public C{
public:
void getD(){
	cout<<"Class D"<<endl;
}
};

int main()
{
	D objd;
	B objb;
	A objA;
	C objC;
	
	objd.getD();
	objA.getA();
	objb.getB();
	objC.getC();
	
	return 0;
}
