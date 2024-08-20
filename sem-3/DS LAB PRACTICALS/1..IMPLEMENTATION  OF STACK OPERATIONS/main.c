/* Imlementation of stack Using Array*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct stack
{
    int arr[MAX];
    int top;
}s;
void push(int);
void pop();
void display();
void main ()
{ 
    int operationNo,element;
    s.top=-1;
    printf("\n1.Push\n2.Pop\n3.Display\n4.TOP VALUE\n5.Exit\n\n ");
    
    while(1)
    { 
        printf("\nEnter the Operation number: ");
        scanf("%d",&operationNo);
        switch(operationNo)
        {
            case 1:
            printf("\nEnter element to be pushed:");
            scanf("%d",&element);
            push(element);
            break;
            case 2:
            pop();
            break;
            case 3:
            printf("\nElements in the stack are :");
            display();
            break;
            case 4:
            printf("\ns.top= %d",s.top);
            break;
            case 5:
            exit(0);
            default:
            printf("\nEnter valid operation number");
            break;
        }
        
    }
  //  getch();
}   
    void push(int x)
    {
        if (s.top==MAX-1){
            printf("\n\t The stack is full/STACK OVERFLOW.");
        }
    else{
      s.top++;
      s.arr[s.top]=x;
      printf("\n\t Element pushed %d",s.arr[s.top]);
      
    }
    }
    void pop()
    {
        if (s.top==-1){
            printf("\n\t The stack is EMPTY/STACK UNDERFLOW.");
        }
    else{
        printf("\n Element poped is %d", s.arr[s.top]);
        s.top--;
        }
    }
    void display()
    {
        if (s.top==-1){
            printf("\n\t The stack is EMPTY/STACK UNDERFLOW.");
        }
    else{
        printf("Elements in the  staack are ");
        for(int i=s.top ;i>=0 ; i-- )
        {
          printf("%d\t",s.arr[i]);  
        }
    }
}
    
        
        
        
        
        
        



