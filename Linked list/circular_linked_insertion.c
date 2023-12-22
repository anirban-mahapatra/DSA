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

// case1
struct node* insert(struct node* head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node* p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

// case2
struct node* inatbet(struct node* head,int ind,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    for(int i=0;i<=ind;i++){
        p=p->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

// case3
struct node* inend(struct node* head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node*));
    struct node* p=head;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=head;
    return head;
}

// case4
struct node* inafno(struct node* head,struct node* ele,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=ele->next;
    ele->next=ptr;
    return head;
}

int main(){
    struct node* head;
    struct node* second;
    struct node* third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=12;
    head->next=second;

    second->data=45;
    second->next=third;

    third->data=78;
    third->next=head;

    printf("Elements before insert\n");
    linked(head);

    printf("Elemants after insert\n");
    // head=insert(head,32);
    // head=inatbet(head,4,50);
    // head=inend(head,30);
    head=inafno(head,third,90);
    linked(head);

    return 0;
}