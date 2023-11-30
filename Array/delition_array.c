#include<stdio.h>

int display(int arr[],int size){
	int i;
	printf("The array is ");
	for(i=0;i<=size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	}
	
void delition(int arr[],int size,int index){
	int i;
	for(i=index-1;i<size;i++){
		arr[i]=arr[i+1];
	}	
}

int main(){
	int arr[10]={10,20,30,40,50,60,70,80,90};
	int size=8,index=1;
	display(arr,size);
	delition(arr,size,index);
	size-=1;
	display(arr,size);
	return 0;
}
