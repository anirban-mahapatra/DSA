#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};

void doubly(struct node* head){
    struct node* ptr=head;
    struct node* p=head;
    printf("Element from beginning\n");
    while(ptr->next!=NULL){
        printf("Element=%d\n",ptr->data);
        ptr=ptr->next;
        p=p->next;
        // printf("%d\n",p->data);
    }
    printf("Element=%d\n\n",ptr->data);

    printf("Element from ending\n");
    while(p!=NULL){
        printf("Element=%d\n",p->data);
        p=p->prev;
    } 
}

int main(){
    struct node* head;
    struct node* second;
    struct node* third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=75;
    head->next=second;

    second->prev=head;
    second->data=21;
    second->next=third;

    third->prev=second;
    third->data=65;
    third->next=NULL;

    doubly(head);

    return 0;
}