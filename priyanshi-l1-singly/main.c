//SINGLY LINKED LIST
#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 
struct node 
{ 
int info; 
struct node *next; 
}*start,*p,*q,*r; 
void create(); 
void Delete(); 
void display(); 
void main() 
{ 
int ch; 
 
start=NULL; //initially Linked list is empty 
 printf("\n 1. Create List \n 2. Delete List \n 3.Display List \n 4. Exit \n"); 
while(1) 
{ 
printf("\n Enter your choice:"); 
scanf("%d",&ch); 
switch(ch) 
{ 
case 1: create(); 
break; 
case 2: Delete(); 
break; 
case 3: display(); 
break; 
case 4: exit(1); 
default: printf("\n Enter a valid choice!"); 
} 
} 
getch(); 
} 

void create() 
{ 
p=malloc(sizeof(struct node)); 
printf("\n Enter data:"); 
scanf("%d",&p->info); 
p->next=NULL; 
if(start==NULL) 
start=p; 
else                             /* Find last node in the list */ 
{ 
q=start; 
while(q->next!=NULL) 
{ q=q->next; } 
q->next=p; 
} 
} 
void Delete() 
{ 
int num, found=0; 
q=start; 
if(q==NULL) 
printf("\n\t Empty List."); 
else 
{ 
printf("\n\t Enter the number to be Deleted:"); 
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
void display() 
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

void insertatstart() 
{ 
//Add the element ‘n’ in the data field of the node 
//p->info= n 
p=malloc(sizeof(struct node)); 
printf("\n Enter data:"); 
scanf("%d",&p->info); 
if(start==NULL) 
{
    p->next=NULL; 
}
else {
p->next=start ;
}
//5. Set the start pointer to the first node 
start=p ;
}


void Deletelast(){
q=start; 
if(q==NULL) 
printf("\n\t Empty List."); 
else 
{ 
while(q->next!=NULL) 
{ 
//printf("%d\t",q->info); 
q=q->next; 
} 
printf("\n ELEMENT DELETED%d\t",q->info);
}   
r=start; /* Find the previous node of q */ 
while(r->next!=q) 
{ r=r->next;} 
r->next=q->next; 
q->next=NULL; 
free(q);
}
