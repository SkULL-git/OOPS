#include<iostream>
using namespace std;

int &getelement(int arr[],int index){
    return arr[index];
}

int main()
{
    int arr[5]={10,20,30,40,50};

    cout<<"Before:- "<<arr[4]<<endl;

    getelement(arr,4)=100;

    cout<<"After:- "<<arr[4]<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"Array at index "<<i<<" will be:-"<<arr[i]<<endl;
    }
    

    return 0;
}
