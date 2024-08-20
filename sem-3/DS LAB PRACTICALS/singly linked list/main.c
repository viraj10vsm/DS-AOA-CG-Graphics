/* Program for Singly Linked List */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int info;
struct node *next;
}*start,*p,*q,*r;
void create_list();
void display_list();
void delete_list();
void main()
{
int ch;
start=NULL;
while(1)
{
printf("\n 1.Create List \n 2.Display List \n 3.Delete List \n 4.Exit \n");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: create_list();
break;
case 2: display_list();
break;
case 3: delete_list();
break;
case 4: exit(1);
break;
default: printf("\n Enter a valid choice!");
}
}
}
void create_list()
{
p=malloc(sizeof(struct node));
printf("\n Enter data:");
scanf("%d",&p->info);
p->next=NULL;
if(start==NULL)
start=p;
else /* Find last node in the list */
{
q=start;
while(q->next!=NULL)
q=q->next;
q->next=p;
}
}

void display_list()
{
q=start;
if(q==NULL)
printf("\n\t Empty List.");
else
{
while(q!=NULL)
{
printf("%d\t",q->info);
q=q->next;
}
}
}

void delete_list()
{
int num, found=0;
q=start;
if(q==NULL)
printf("\n\t Empty List.");
else
{
printf("\n\t Enter the number to be deleted:");
scanf("%d",&num);
while((found==0) && (q!=NULL))
{
if(q->info==num)
found=1;
else
q=q->next;
}
if(found==0)
printf("\n No such number in the list.");
else
{
if(q==start) /* If it is a first node */
{
start=start->next;
q->next=NULL;
free(q);
}
else
{
r=start; /* Find the previous node of q */
while(r->next!=q)
{ r=r->next;}
r->next=q->next;
q->next=NULL;
free(q);
}
}
}
}