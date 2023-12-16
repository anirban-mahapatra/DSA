#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void linked(struct node* head){
    while(head!=NULL){
        printf("Element=%d\n",head->data);
        head=head->next;
    }
}

// case1
struct node* delfi(struct node* head){
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

// case2
struct node* delind(struct node* head,int ind){
    struct node* ptr=head;
    struct node* p=head->next;
    struct node* q=head;
    int j;
    for(j=0;q!=NULL;j++){
        q=q->next;
    }

    if(j>=ind){
    for(int i=0;i<ind-2;i++){
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=p->next;
    free(p);
    printf("Elements after deliton\n");
    }
    else{
        printf("Index no not valid");
        return 0;
    }
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

    head->data=65;
    head->next=second;

    second->data=54;
    second->next=third;

    third->data=78;
    third->next=NULL;

    printf("Elements before deletion\n");
    linked(head);
    // printf("Elements after deliton\n");
    // head=delfi(head);
    head=delind(head,5);
    // head=delend(head);
    // head=delele(head,54);
    linked(head);

    return 0;
}