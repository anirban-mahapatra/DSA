#include<stdio.h>

int liner(int arr[],int size,int ele){
	int i,chk=0;
	for (i=0;i<=size;i++){
		if (arr[i]==ele){
			printf("%d is found in index no %d\n",ele,i);
			chk=1;
		}
	}
	if(chk==0){
		printf("%d is not found in the array",ele);
	}
}

int main(){
	int arr[]={21,55,58,65,57,5,86,5,8,56};
	int size=sizeof(arr)/sizeof(int);
	int ele;
	printf("Enter the element you want to search:-");
	scanf("%d",&ele);
	liner(arr,size,ele);
	return 0;
}
