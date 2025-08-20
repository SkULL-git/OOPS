#include<iostream>
using namespace std;

class Football{
	public:
	virtual	void slangs(){
			cout<<"Football"<<endl;
		}
};

class Messi: public Football{
	public:
		void slangs(){
			cout<<"ANKARA MESSIIIIIII"<<endl;
		}
};

class Ronaldo: public Football{
	public:
		void slangs(){
			cout<<"SIUUUUUUUUUUUUUUUU";
		}
}; 

int main()
{
	Football *f;
	
	Messi m;
	Ronaldo r;
   
    f=&m;
	f->slangs();
	
	f=&r;
	f->slangs();
	
	return 0;
}
