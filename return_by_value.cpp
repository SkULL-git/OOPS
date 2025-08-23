#include<iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}

int main()
{
    int a=10;
    int b=20;
    int c=add(a,b);
    
    cout<<"Result:- "<<c<<endl;

    return 0;
}