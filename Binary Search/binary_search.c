#include<stdio.h>

int binary_search(int arr[],int size,int ele){
	int low,high,mid;
	low=0;
	high=size-1;

	while(low<=high){
		mid=(high+low)/2;
		if (arr[mid]==ele){
			printf("%d is found in index no %d",arr[mid],mid);
			return mid;
		}
		if(arr[mid]<ele){
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
	int size=sizeof(arr)/sizeof(int),ele;
	printf("Enter the number you want to scearch:-");
	scanf("%d",&ele);
	binary_search(arr,size,ele);
	return 0;
}
