#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*next;
}*rear,*front,*p,*q,*r;

void enqueue();
void dequeue();
void display();

int main(){
    int ch;
    front=NULL;
    rear=NULL;//empty stack condition
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
    while(1){
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            default:printf("Invalid choice");
        }
    }
}
void enqueue(){
    p=malloc(sizeof(struct node));
    p->next=NULL;
    printf("Enter the data:");
    scanf("%d",&p->info);
    if(front==NULL)
      front=rear=p;
    else{
        rear->next=p;
        rear=rear->next;
    }  
}
void dequeue(){
   q=front;
   if(front==NULL)
     printf("Queue is empty");
   else{
        printf("Element deleted=%d\n",front->info);
       front=front->next;
       q->next=NULL;
       free(q);
   }
}
void display(){
    q=front;
    if(front==NULL)
      printf("Queue is empty");
    else{
       
        while(q!=NULL){
            printf("%d\n",q->info);
            q=q->next;
        }
    }
}






