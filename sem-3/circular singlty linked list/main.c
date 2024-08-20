#include<stdio.h>
#include<stdlib.h>
struct Node
{
int info;
struct Node *next;
}*q;
struct Node *front=NULL,*rear=NULL;
void create();
void del();
void display();

void main()
{
int ch;
do
{
  printf("\nMenu\n\t 1. Create \n\t 2. Delete \n\t 3. Display \n\t 4. Exit");
  printf("\nEnter your choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	create();
	break;
   case 2:
	del();
	break;
   case 3:
	display();
	break;
   case 4:
	exit(1);
   default:
	printf("\nInvalid choice :");
  }
 }while(1);
}

void create()
{
 struct Node *p;
 p=malloc(sizeof(struct Node));
 printf("\nEnter the node value : ");
 scanf("%d",&p->info);
 p->next=NULL;
 if(rear==NULL)
	front=rear=p;
 else
  {
	rear->next=p;
	rear=p;
  }
	p->next=front;       //rear->next=front;
}



void del()
{
  q=front;
  if(front==NULL)
	printf("\nUnderflow :");
  else
  {
    if(front==rear)
    {
	printf("\n%d",front->info);
	front=rear=NULL;
    }
    else
    {
	printf("\n%d",front->info);
	front=front->next;
	rear->next=front;
     }
	q->next=NULL;
free(q);
   }
}


void display()
{
  q=front;
   if(front==NULL)
    printf("\nEmpty");
   else
   {
    printf("\n");
       while(q!=rear)
       {
	 printf("\n%d address=%u next=%u\t",q->info,q,q->next);
	 q=q->next;
       }
	 printf("\n%d address=%u next=%u\t",q->info,q,q->next);
   }
}