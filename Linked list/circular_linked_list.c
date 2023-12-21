#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void linked(struct node* head){
    struct node* p=head;
    do{
        printf("Element=%d\n",p->data);
        p=p->next;
    }while(p!=head);
}

int main(){
    struct node* head;
    struct node* second;
    struct node* third;

    head=(struct node*)malloc(sizeof (struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=45;
    head->next=second;

    second->data=78;
    second->next=third;

    third->data=12;
    third->next=head;

    linked(head);

    return 0;    
}