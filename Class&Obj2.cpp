#include<iostream>
using namespace std;

class student{
	public:
		string name;
		int roll;
		float marks;
		
		void display(){
			cout<<"Name:- "<<name<<endl;
			cout<<"Roll No.:- "<<roll<<endl;
			cout<<"Marks:- "<<marks<<endl;
		}
};

int main(){
	student s1;
	
	s1.name="Shivam";
	s1.roll=40;
	s1.marks=7.60;
	
	s1.display();
	
	return 0;
}
