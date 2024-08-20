#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*next;
}*top,*p,*q;

void push();
void pop();
void display();

int main(){
    int ch;
    top=NULL;//empty stack condition
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
    while(1){
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            default:printf("Invalid choice");
        }
    }
}
void push(){
    p=malloc(sizeof(struct node));
    p->next=NULL;
    printf("Enter the data:");
    scanf("%d",&p->info);
    if(top==NULL)
      top=p;
    else{
        p->next=top;
        top=p;
    }  
}
void pop(){
    q=top;
    if(top==NULL)
      printf("STack is empty");
    else{
        printf("Element deleted=%d\n",top->info);
        top=top->next;
        q->next=NULL;
        free(q);
    }  
}
void display(){
    q=top;
    if(top==NULL)
      printf("STack is empty");
    else{
        while(q!=NULL){
            printf("%d\n",q->info);
            q=q->next;
        }
    }
}






