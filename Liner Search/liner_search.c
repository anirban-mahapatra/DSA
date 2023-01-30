#include<stdio.h>

int linersearch(int arr[],int size,int ele){
	int i;
	for(i=0;i<size;i++){
		if (arr[i]==ele){
		printf("The element %d is found in index no  %d ",ele,i);
		return i;
		}
	}
		if(arr[i]!=ele){
		printf("The element %d is not found in array",ele);
	}
}

int main(){
	int arr[]={45,1,65,15,5,95,26,9,56,59,98,87};
	int size=sizeof(arr)/sizeof(int);
	int ele;
	printf("Enter the element you want to search:-");
	scanf("%d",&ele);
	linersearch(arr,size,ele);
	return 0;
	}
