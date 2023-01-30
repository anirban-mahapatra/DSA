#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

// void circular(struct node *head){
//     struct node *ptr;
//     ptr=head;
//     while(ptr->next!=head){
//         printf("  %d  \n",ptr->data);
//         ptr=ptr->next;
//     }
// }

void circular(struct node* head){
    struct node* p=head;
    do{
        printf("Element=%d\n",p->data);
        p=p->next;
    }while(p!=head);
}

// case1
struct node* delfi(struct node* head){
    // struct node* ptr=head;
    struct node* p2=head;
    struct node* p=head->next;
    while(p2->next!=head){
        p2=p2->next;
	}
	p2->next=p;
    // free(ptr);
    free(head);
    return p;
}

// case2
struct node* delin(struct node* head,int ind){
    struct node* ptr=head;
    struct node* p=head->next;
    for(int i=0;i<ind-2;i++){
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
    while(p->next!=head){
        p=p->next;
        ptr=ptr->next;
    }
    ptr->next=head;
    free(p);
    return head;
}

// case4
struct node* delele(struct node* head,int ele){
    struct node* ptr=head;
    struct node* p=head->next;
    while(p->data!=ele && p->next!=head){
        p=p->next;
        ptr=ptr->next;
    }
    if(p->data==ele){
        printf("Element after delition\n");
        ptr->next=p->next;
        free(p);
        return head;
    }
    else
        printf("%d is not found in the list",ele);
}

int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=21;
    head->next=second;

    second->data=23;
    second->next=third;

    third->data=54;
    third->next=fourth;

    fourth->data=99;
    fourth->next=head;

    printf("Elemants before deletion\n");
    circular(head);
    // printf("Element after delition\n");
    // head=delfi(head);
    // head=delin(head,2);
    // head=delend(head);
    head=delele(head,99);
    circular(head);

    return 0;
}
