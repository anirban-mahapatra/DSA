#include<stdio.h>

int display(int arr[],int size){
	printf("The array is ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	}
	
int insertion(int arr[],int size,int ele,int index,int cap){
	if(size>=cap){
		return -1;
	} 
	for(int i=size;i>=index;i--){
		arr[i+1]=arr[i];
	}
	arr[index]=ele;
	return 1;
	
}

int main(){
	int arr[9]={10,20,30,40,50,60,70,80,90};
	int size=8,ele=100,index=5;
	display(arr,size);
	insertion(arr,size,ele,index,15);
	size+=1;
	display(arr,size);
	return 0;
}
