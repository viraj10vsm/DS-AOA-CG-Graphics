#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int info;
struct node *prev;
struct node *next;
}*start;
void create_list(int);
void addatbeg(int);
void addafter(int,int);
void display_list();
void delete_list(int);

void main()
{
int ch,n,m,pos,i;
start=NULL;
while(1)
{
printf("\n 1.Create List \n 2.Add at Beginning \n 3.Add after \n 4.Display List \n");
printf(" 5.Delete List \n 6.Exit \n");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)

{
case 1: printf("\n How many elements u want:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("\n Enter the element:");
 scanf("%d",&m);
 create_list(m);
}
break;
case 2: printf("\n Enter the element:");
 scanf("%d",&m);
 addatbeg(m);
break;
case 3: printf("\n Enter the element:");
 scanf("%d",&m);
 		 printf("\n Enter the position after which element:");
 scanf("%d",&pos);
 addafter(m,pos);
break;
case 4: display_list();
break;
case 5: printf("\n Enter the element for deletion:");
 scanf("%d",&m);
 delete_list(m);
break;
case 6: exit(1);
break;
default: printf("\n Enter a valid choice!");
}
}
}

void create_list(int num)
{
struct node *q,*p;
p=malloc(sizeof(struct node));
p->info=num;
p->next=NULL;
if(start==NULL)
{
p->prev=NULL;
start->prev=p;
start=p;
}
else /* Find last node in the list */
{
q=start;
while(q->next!=NULL)
 { q=q->next; }
q->next=p;
p->prev=q;
}
}

void addatbeg(int num)
{
struct node *p;
p=malloc(sizeof(struct node));
p->prev=NULL;
p->info=num;
p->next=start;
start->prev=p;
start=p;
}

void addafter(int num,int c)
{
struct node *p,*q;
int i;
q=start;
for(i=0;i<c-1;i++)
{
q=q->next;
if(q==NULL)
{
  printf("\n There are less than %d elements",c);
  return;
    }
   }
p=malloc(sizeof(struct node));
p->info=num;
q->next->prev=p;
p->next=q->next;
p->prev=q;
q->next=p;
}

void display_list()
{
struct node *q;
if(start==NULL)
{
   printf("\n\t Empty List.");
   return;
}
q=start;
printf("\n The List is:");
while(q!=NULL)
{
  printf("%d\t",q->info);
  q=q->next;
}
}

void delete_list(int num)
{
struct node *q;
q=start;
if(start->info==num)
{
start=start->next; /* First element deleted */
start->prev=NULL;
free(q);
return;
}
else{    /* If it is not First Node*/
       while(q->info!=num)
          { q=q->next;}
          q->prev->next=q->next;
	      q->next->prev=q->prev;
          q->next=NULL;
	      q->prev=NULL;
	      free(q);
    }
}