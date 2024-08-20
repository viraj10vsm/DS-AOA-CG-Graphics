/* */
#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 
struct node 
{ 
    int info;
    struct node *next;
}*p,*start,*q,*r,*v; 
void insert();
void insertatStart();
void insertAfter();
void insertatEnd(); 
void Delete(); 
void Deletelast();
void display(); 
void main() 
{ 
int ch; 
start=NULL;
// printf("\n 1. Create List \n 2. Delete List \n 3.Display List \n 4. Exit \n"); 
while(1) 
{ 
printf("\n 1. Create List \n 2. Delete List \n 3. DELETELAST \n 4. Display List \n 5. Exit \n"); 
printf("\n Enter your choice:"); 
scanf("%d",&ch); 
switch(ch) 
{ 
case 1: insert(); 
display();
break; 
case 2: Delete();
display();
break; 
case 3:
Deletelast();
display();
break;
case 4: display(); 
break; 
case 5: exit(1); 
default: printf("\n Enter a valid choice!"); 
} 
} 
getch(); 
} 

void insert() 
{ int z;
 printf("\n 1. INSERT AT START \n 2. INSERT AFTER \n 3. INSERT AT END \n ");
 printf("\n CHOOSE INSERTION OPTION: "); 
 scanf("%d",&z); 
 switch(z)
 {
case 1: insertatStart();         // 1.INSERT AT START  
break; 
case 2: insertAfter();           //2. INSERT AFTER
break; 
case 3: insertatEnd();           //3.INSERT AT END 
break; 
default: printf("\n Enter a valid choice!"); 
 }
} 


void insertatStart(){
    p= malloc(sizeof(struct node));
    printf("\n Enter data:");
    scanf("%d",&p->info);
    if(start==NULL){
        p->next=NULL;  // 
    }
    else{
        p->next=start;
    }
    start =p;
    
}
void insertAfter1(){
   int keyadd;
   v=start;
   printf("\n Enter key");
   scanf("%d",&keyadd);
   p= malloc(sizeof(struct node));
   printf("\n Enter data:");
   scanf("%d",&p->info);
   while(v->info!= keyadd){
       v=v->next;
    }
     if(v->next==NULL){
       printf("\n Enter same data again");
       insertatEnd();
   } 
   else{
    p->next=v->next;
    v->next=p;
   }
}

void insertAfter(){
    int num, found=0; 
q=start; 
if(q==NULL) 
printf("\n\t Empty List."); 
else 
{ 
printf("\n\t Enter the KEY:"); 
scanf("%d",&num); 
while((found==0) && (q!=NULL)) 
{ 
if(q->info==num) 
found=1; 
else 
q=q->next; 
} 

if(found==0) {
printf("\n No such number in the list."); 
return;
}
else {
    p= malloc(sizeof(struct node));
     printf("\n Enter data:");
    scanf("%d",&p->info);
    p->next=q->next;
    q->next=p;
}
}   
}
void insertatEnd(){
    q=start;
    if(start==NULL){
    p= malloc(sizeof(struct node));
    printf("\n Enter data:");
    scanf("%d",&p->info);
    p->next=NULL;
    start=p;
    } 
    else{
    p= malloc(sizeof(struct node));
    printf("\n Enter data:");
    scanf("%d",&p->info);
    p->next=NULL;
    while(q->next != NULL){
        q=q->next;
    }
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
int count=0;
q=start; 
if(q==NULL) 
printf("\n\t Empty List."); 
else 
{ 
    printf("\n THE LINKED LIST IS:  ");
while(q!=NULL) 
{ 
printf("%d\t",q->info); 
q=q->next; 
count++;
} 
printf("\nNO OF NODES: %d",count);
}
} 
void Deletelast(){
q=start; 
if(q==NULL) {
printf("\n\t Empty List."); 
}
else if(q->next==NULL){
    start=NULL;
    free(q);
}
else { 
while(q->next!=NULL) 
{ 
//printf("%d\t",q->info); 
q=q->next; 
} 
printf("\n ELEMENT DELETED %d\t",q->info);
r=start; /* Find the previous node of q */ 
while(r->next!=q) 
{ r=r->next;} 
r->next=q->next; 
q->next=NULL; 
free(q);
}
}
/*
void insert() 
{ int z;
 printf("\n 1. INSERT AT START \n 2. INSERT AFTER \n 3.INSERT AT END \n ");
 printf("\n Enter your choice:"); 
 scanf("%d",&z); 
 switch(z)
 {
case 1: insertatStart();         // 1.INSERT AT START  
break; 
case 2: insertAfter();         //2. INSERT AFTER
break; 
case 3: insertatEnd();      //3.INSERT AT END 
break; 
default: printf("\n Enter a valid choice!"); 
 }
}  */





