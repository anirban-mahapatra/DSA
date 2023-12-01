#include<stdio.h>

int binary(int arr[],int size,int ele){
	int low=0,mid,high=size-1;
	while (low<=high){
		mid=(low+high)/2;
		if(arr[mid]==ele){
			printf("%d is found in index no %d",ele,mid);
			return mid;
		}
		else if(arr[mid]<ele){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	if (arr[mid]!=ele){
		printf("%d is not found in the array",ele);
	}
}


int main(){
	int arr[]={00,11,22,33,44,55,66,77,88,99};
	int size=sizeof(arr)/sizeof(int);
	int ele;
	printf("Enter the element you want to search:-");
	scanf("%d",&ele);
	binary(arr,size,ele);
	return 0;
}
