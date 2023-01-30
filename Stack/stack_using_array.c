#include<stdio.h>
#include<stdlib.h>

int push(int arr[],int top,int size){
    if (top>=size-1){
        printf("\nStack overflow\n");
    }
    else{
        int ele;
        top=top+1;
        printf("\nEnter the element:-");
        scanf("%d",&ele);
        arr[top]=ele;
        printf("%d is push",ele); 
    }
    return arr,top;
}

int pop(int arr[],int top){
    int del;
    if (top==-1){
        printf("\nStack underflow\n");
    }
    else{
        del=arr[top];
        printf("\nPop elment is %d",del);
        top=top-1;
    }
    return top;
}

void display(int arr[],int top){
    if(top<=-1){
        printf("\nStack is empty\n");
    }
    else{
        int i;
        printf("\n");
        for(i=0;i<=top;i++){
            printf("%d  ",arr[i]);
        }
    }
}

int main(){
    int size=10,top=-1,ch;
    int arr[size];
    while (1){
        printf("\n\n1. Push, 2. Pop, 3.Display, 4.Exit\nEnter your choice:-");
        scanf("%d",&ch);

        switch (ch){
        case 1:
            top=push(arr,top,size);
            break;
        case 2:
            top=pop(arr,top);
            break;
        case 3:
            display(arr,top);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Input\n");
            break;
        }
    }

    return 0;
}