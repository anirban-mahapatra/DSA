#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void linked(struct node* ptr){
    while(ptr!=NULL){
        printf("Element=%d\n",ptr->data);
        ptr=ptr->next;
    }
}

// case1
struct node* insertbeg(struct node* head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

// case2
struct node* insertbetw(struct node* head,int data,int index){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

// case3
struct node* insertend(struct node* head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    ptr->next=NULL;
    p->next=ptr;
    return head;
}

// case4
struct node* insertafter(struct node* head,struct node* prvno,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    while(p->next!=prvno){
        p=p->next;
    }
    ptr->next=prvno->next;
    prvno->next=ptr;
    ptr->data=data;
    // ptr->data=data;
    // ptr->next=prvno->next;
    // prvno->next=ptr;
    return head;
}

int main(){
    struct node* head;
    struct node* second;
    struct node* third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=87;
    head->next=second;
    
    second->data=21;
    second->next=third;

    third->data=54;
    third->next=NULL;
    
    printf("Elements before insertion\n");
    linked(head);
    printf("Element after insertion\n");
    // head=insertbeg(head,23);
    // head=insertbetw(head,32,2);
    // head=insertend(head,98);
    head=insertafter(head,second,48);
    linked(head);
    return 0;
}