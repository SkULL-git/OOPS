#include<iostream>
using namespace std;

//Global Variable
int a = 10;

//Function Parameter
void fun() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << x << endl;
}

int main() {
    //Global variable
    cout << a << endl;

    //Local variable
    int b = 20;
    cout << b << endl;

    //Function Parameter
    fun();

    //Block scope
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    return 0;
}

