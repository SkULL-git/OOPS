#include<stdio.h>
int main()
{
	int arr[5];
	int sum =0,max;
	
	printf("Enter 5 Numbers:-\n");
	for(int i=0;i<5;i++){
		printf("Element at %d:- ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Array ELements:-\n");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	
	for(int i=0;i<5;i++){
		sum += arr[i];
	}
	printf("\n\nSum of all elements will be:- %d\n",sum);
		
	max=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}	
	printf("Maximum Value is %d",max);
	return 0;
}
