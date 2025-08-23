#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int roll;

    public:
    void setdata(int r, string n){
        roll=r;
        name=n;
    }

    void display(){
        cout<<"Roll No. of Student:- "<<roll<<endl;
        cout<<"Name of Student:- "<<name<<endl;
    }
};

int main()
{
    student s1;

    s1.setdata(40,"Shivam");
    s1.display();

    return 0;
}