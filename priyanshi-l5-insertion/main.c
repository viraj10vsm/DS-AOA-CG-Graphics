//Inserting a node in linked list
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

//case 1:Inserting at first
struct Node* insertAtFirst(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

//case 2:Inseting at a given index
struct Node* insertAtIndex(struct Node*head,int data,int index){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
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

//case 3:Inserting at end
struct Node* insertAtEnd(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    ptr->next=NULL;
    p->next=ptr;
    return head;
}

//case 4:Inserting after a given Node
struct Node* insertAfterNode(struct Node*head,struct Node*prevNode,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
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
    
    printf("Linked list before Insertion:\n");
    linkedListTraversal(head);
    
    head=insertAfterNode(head,second,90);
    printf("Linked list after Insertion:\n");
    linkedListTraversal(head);
    return 0;
}

