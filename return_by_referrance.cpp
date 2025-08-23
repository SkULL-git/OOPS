#include<iostream>
using namespace std;

int &getelement(int arr[],int index){
    return arr[index];
}

int main()
{
    int arr[5]={10,20,30,40,50};

    cout<<"Before"<<arr[2]<<endl;

    getelement(arr,2)=100;

    cout<<"After"<<arr[2]<<endl;

    return 0;
}