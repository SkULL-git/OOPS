#include<iostream>
using namespace std;

int main()
{
	int arr[2];
	int max;
	
	cout<<"Enter Two Integer Numbers:- "<<endl;
	
	for(int i=0;i<2;i++){
		cin>>arr[i];
	}
	
	cout<<"Elements are:-"<<endl;
	for(int i=0;i<2;i++){
		cout<<arr[i]<<endl;
	}
	
	max=arr[0];
	for(int i=1;i<2;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"Largest Number will be:- "<<max<<endl;
	return 0;
}
