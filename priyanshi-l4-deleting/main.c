//Deleting a  node from a linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
//traversing a linked list
void linkedListTraversal(struct Node*ptr){
    while(ptr!=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

//case 1:Deleting first Node
struct Node*deleteFirst(struct Node*head){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    head=head->next;
    free(ptr);
    return head;
}

//case 2:Deleting a node at a given index
struct Node*deleteAtIndex(struct Node*head,int index){
    struct Node*p=head;
    struct Node*q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

//case 3:Deleting the last Node
struct Node*deleteAtLast(struct Node*head){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

//Deleting a node of a given value
struct Node*deleteAValue(struct Node*head,int value){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->data==value && q->next==NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
    free(q);
    }
    return head;
}

int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    
    //Allocating memory for nodes in the linked list in heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    
    //link head and second nodes
    head->data=10;
    head->next=second;
    //link second and third nodes
    second->data=20;
    second->next=third;
    //link third and fourth nodes
    third->data=30;
    third->next=fourth;
    //terminate the list at fourth node
    fourth->data=40;
    fourth->next=NULL;
    
    printf("Linked list before deletion:\n");
    linkedListTraversal(head);
    
    head=deleteAValue(head,60);
    printf("Linked list after deletion:\n");
    linkedListTraversal(head);
    return 0;
}


