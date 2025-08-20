#include<iostream>
using namespace std;

class Animal{
	public:
		void displayAnimal(){
			cout<<"This is Animal"<<endl;
		}
};

class Dog: public Animal{
	public:
		void displayDog(){
			cout<<"Animal is Dog"<<endl;
		}
};

class Retriever: public Dog{
	public:
		void displayRetriever(){
			cout<<"Retriever is the breed of Dogs"<<endl;
		}
};

int main()
{
	Retriever obj;
	
	obj.displayAnimal();
	obj.displayDog();
	obj.displayRetriever();
	
	return 0;
}
//Inheritance ka matlab hota hai ek class ka doosri class ke properties aur methods ko inherit (yaani "waraasat me lena").

//Jo class inherit kar rahi hai usse derived class (child class) kehte hain.

//Jis class se inherit kiya gaya hai usse base class (parent class) kehte hain.
