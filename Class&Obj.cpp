#include<iostream>
using namespace std;

	class car{
		public:
			string color;
			int speed;
	
	void start(){
	cout<<"Car Started!"<<endl;
}

void stop(){
	cout<<"Car Stopped!"<<endl;
}
};

int main(){
	car mycar;
	
	mycar.color = "Red";
	mycar.speed = 120;
	
	cout<<"Color:- "<<mycar.color<<endl;
	cout<<"Speed:- "<<mycar.speed<<"km/h"<<endl;
	
	mycar.start();
	mycar.stop();
	return 0;
}
