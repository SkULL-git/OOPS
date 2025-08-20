#include<iostream>
using namespace std;

class Calculation{
	public:
	int area(int length,int breadth){
		cout<<"Area of Rectangle:- "<<length*breadth<<endl;
		return 0;
	}
	int area(int side){
		cout<<"Area of Square:- "<<side*side<<endl;
		return 0;
	}
	int area(int radius,float pi){
		cout<<"Area of Circle:- "<<radius*radius*pi<<endl;
		return 0;
	}
};

int main()
{
	Calculation obj;
	
	float pi=3.14;
	
	obj.area(5,6);
	obj.area(7);
	obj.area(15,pi);
	
	return 0;
}
