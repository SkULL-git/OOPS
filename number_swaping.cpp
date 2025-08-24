#include<iostream>
using namespace std;

int a;
int b;
int temp;

void getdata(){
cout<<"Enter A:-"<<endl;
cin>>a;

cout<<"Enter B:-"<<endl;
cin>>b;
}

int main()
{
    getdata();

    temp=a;
    a=b;
    b=a;

    cout<<"After Swapping:-"<<endl;
    cout<<"A will be:- "<<a<<" & "<<"B will be:-"<<b<<endl;

    return 0;
}