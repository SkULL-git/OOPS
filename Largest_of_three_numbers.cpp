#include<iostream>
using namespace std;

int main()
{
	int arr[3];
	int max;
	
	cout<<"Enter 3 Integer Numbers:- "<<endl;
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	
	cout<<"Elements are:- "<<endl;
	for(int i=0;i<3;i++){
		cout<<arr[i]<<endl;
	}
	
	max=arr[0];
	for(int i=1;i<3;i++){
		if(arr[i]>max){
		max=arr[i];
		}
}
	cout<<"Largest Number in the array:- "<<max<<endl;
	
	return 0;
}
