#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter Integer:- ";
    cin>>num;

    if(num<0){
        cout<<"Negative Integer";
    }
    else if (num==0)
    {
        cout<<"Zero";
    }
    else{
        cout<<"Positive Integer";
    }

    return 0;
}