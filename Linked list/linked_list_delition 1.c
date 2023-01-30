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
struct node* delbeg(struct node* head){
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

// case2
struct node* delind(struct node* head,int ind){
    struct node* ptr=head;
    struct node* p=head->next;
    for (int i = 0; i < ind-1; i++){
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=p->next;
    free(p);
    return head;
}

// case3
struct node* delend(struct node* head){
    struct node* ptr=head;
    struct node* p=head->next;
    while(p->next!=NULL){
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=NULL;
    free(p);
    return head;
}

// case4
struct node* delele(struct node* head,int ele){
    struct node* ptr=head;
    struct node* p=head->next;
    while(p->data!=ele && p->next!=NULL){
        ptr=ptr->next;
        p=p->next;
    }
    if(p->data==ele){
        ptr->next=p->next;
        free(p);
        return head;
    }
}

int main(){
    struct node* head;
    struct node* second;
    struct node* third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=56;
    head->next=second;

    second->data=98;
    second->next=third;

    third->data=12;
    third->next=NULL;

    printf("Elements before deletion\n");
    linked(head);
    
    printf("\nElements after delition\n");
    // head=delbeg(head);
    // head=delind(head,1);
    // head=delend(head);
    head=delele(head,98);
    linked(head);

    return 0;
}