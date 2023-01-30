#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

linkedlist(struct node *ptr){
	while (ptr!=NULL){
		printf("Element=%d\n",ptr->data );
		ptr=ptr->next;
	}
}

int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));

	head->data=7;
	head->next=second;
	
	second->data=4;
	second->next=third;
	
	third->data=5;
	third->next= NULL;
	
	linkedlist(head);
	return 0;
}
