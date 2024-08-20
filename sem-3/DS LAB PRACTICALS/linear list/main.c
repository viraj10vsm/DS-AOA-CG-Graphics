/* Implementation of Linear List using array */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 30
int list[MAX];
int n; /* Number of elements in the List */
void input();
int search(int);
void insert();
void del();
void display();
void main()
{
int ch, element, pos;
printf("\n 1.Input List \n 2.Insert \n 3.Search \n 4.Delete \n 5.Display");
printf("\n 6.Exit");
while(1)
{
printf("\n Enter ur choice:");
scanf("%d",&ch);

switch(ch)
{
case 1: printf("\n How many elements in the list:");
scanf("%d",&n);
input(n);
break;
case 2: insert();
break;
case 3: printf("\n Enter the element to be searched:");
scanf("%d",&element);
pos=search(element);
if(pos>=1)
printf("\n %d found at position %d",element, pos);
else
printf("\n Element not found.");
break;
case 4: del();
break;
case 5: display();
break;
case 6: exit(0);
break;
default: printf("\n Wrong Choice.");
}
}
getch();
}
/***** Input Function *****/
void input()
{
int i;
for(i=0;i<n;i++)
{
printf("\n Input value for element %d:",i+1);
scanf("%d",&list[i]);
}
}
/***** Search Function *****/
int search(int element)
{
int i;
for(i=0;i<n;i++)
{
if(element==list[i])
return(i+1);
}
return(0); /* If the element is not found */
}
/***** Input Function *****/
void insert()
{
int temp,element,position;
if(n==MAX)
{
printf(" \n List Overflow.");
return;
}
printf("\n Enter the position for insertion:");
scanf("%d",&position);
printf("\n Enter the value:");
scanf("%d",&element);
if(position>n+1)
{
printf("\n Enter the position less than or equal to %d:",n+1);
return;
}
/* Insertion at the end */
if(position==n+1)
{
list[n]=element;
n=n+1;
return;
}
/* Insertion in between */
temp=n-1;
while(temp>=position-1)
{
list[temp+1]=list[temp]; /*shifting right */
temp--;
}
list[position-1]=element;
n=n+1;
}
/* Delete Function */
void del()
{
int temp,position,element;
if(n==0)
{
printf("\n List underflow.");
return;
}
printf("\n Enter the element to be deleted:");
scanf("%d",&element);
if(element==list[n-1]) /* Deletion at the end */
{
n=n-1;
return;
}
position=search(element);
if(position==0)
{
printf("\n Element not present in the list.");
return;
}
/* Deletion in between */
temp=position-1;
while(temp<=n-1)
{
list[temp]=list[temp+1]; /* shifting left */
temp++;
}
n=n-1;
}

/* Display Function */
void display()
{
int i;
if(n==0)
{
printf(" \n List is empty.");
return;
}
printf("\n List is:");
for(i=0;i<n;i++)
printf("\n Position=%d \t %d \n", i+1,list[i]);
}