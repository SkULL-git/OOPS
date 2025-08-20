#include<iostream>
using namespace std;

class cricket{
	public:
		virtual void get()=0;
};

class MSD: public cricket{
	public:
		void get(){
			cout<<"MSD is the only captain who won 3 consecutive ICC Tournaments with Team INDIA"<<endl;
		}
};

int main()
{
	cricket *c;
	MSD objm;
	c=&objm;
	c->get();
	
	return 0;
}
