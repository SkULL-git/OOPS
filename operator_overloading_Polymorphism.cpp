#include<iostream>
using namespace std;

class complex{
	public:
		int real,imag;
		
		//Constructor
		complex (int r=0, int i=0){
			real=r;
			imag=i;
		}
		
		//"+" operator overload
		complex operator + (complex obj){
			complex temp;
			temp.real=real + obj.real;
			temp.imag=imag + obj.imag;
			return temp;
		}
			
		//display function
		void getdisplay(){
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
		
		
};

int main()
{
	complex c1(2,7), c2(5,6);
	
	complex c3 = c1 + c2;
	
	c3.getdisplay();
	
	return 0;
}
