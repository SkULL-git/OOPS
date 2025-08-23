#include<iostream>
using namespace std;

int main()
{
    int attendance;
    int marks;

    cout<<"Enter Attendance:- ";
    cin>>attendance;
    cout<<"Enter MST Marks:- ";
    cin>>marks;

    if(attendance>=75){
        cout<<"Attendance Passed\n";
        if(marks>=40){
            cout<<"Eligible for END-SEM";
        }
        else{
            cout<<"Marks is Less, Not Eligible for END-SEM";
        }
    }

    else{
        cout<<"Attendance is not Passed, Not Eligible for END-SEM";
    }

    return 0;
}