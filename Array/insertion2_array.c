#include<stdio.h>

int display(int arr[],int n,int cap){
	if(cap<n){
		return -1;
	}
	int i;
	for(i=0;i<n;i++){
	printf("%d ",arr[i]);
}
printf("\n");
}

int insertion(int arr[],int ele,int ind,int n,int cap){
	if(cap<=n){
		printf("Array is full\n");
		return -1;
	}
	int i;
	for(i=n;i>=ind;i--){
		arr[i+1]=arr[i];
	}
	arr[ind]=ele;
	printf("The new array is ");
}


int main(){
	int arr[10]={},n,ele,ind,i,cap=10;
	printf("Enter the size of the array:-");
	scanf("%d",&n);
	printf("Enter the array:-");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The array is ");
	display(arr,n,cap);
	printf("Enter the index no and element:-");
	scanf("%d%d",&ind,&ele);
	insertion(arr,ele,ind-1,n,cap);
	display(arr,n+1,cap);
	return 0;
}
